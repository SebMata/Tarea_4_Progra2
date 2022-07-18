#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "./../../lib/include/producto.h"
#include "./../../lib/include/tienda.h"
#include "addproduct.h"
#include "modifyproduct.h"
#include "deleteproduct.h"
#include <QFileDialog>
#include <QMessageBox>
#include <string>
#include <fstream>
#include <sstream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tienda = new Tarea3::Tienda();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete tienda;
}

void MainWindow::on_BotonAgregar_clicked()
{
    addProduct addProduct(this);
        int result = addProduct.exec();
        if (result == QDialog::Accepted) {
            Tarea3::Producto *producto = new Tarea3::Producto(addProduct.ObtenerID(),addProduct.ObtenerNombre(),addProduct.ObtenerExistencia());
            tienda->AgregarProducto(producto);
            QString productoLista = (QString::number(addProduct.ObtenerID())+" "+QString::fromStdString(addProduct.ObtenerNombre())+" "+QString::number(addProduct.ObtenerExistencia()));
            this->ui->listaEditable->addItem(productoLista);

        } else {
            QMessageBox* msgbox = new QMessageBox(this);
            msgbox->setWindowTitle("Título del diálogo");
            msgbox->setText("Cancelado");
            msgbox->open();
        }
}


void MainWindow::on_BotonGuardarTienda_clicked()
{
    bool ok =false;
    QString strnombre = this->ui->nombretienda->text();
    QString strdiri = this->ui->direccioninternet->text();
    QString strdirf = this->ui->direccionfisica->text();
    QString strtel = this->ui->telefono->text();
    if (strnombre.isEmpty())
        {
            ok = true;
            this->ui->labelVacioNombre->setText("Falta información");
        }
    if (strdiri.isEmpty())
        {
            ok = true;
            this->ui->labelVacioDirI->setText("Falta información");
        }
    if (strdirf.isEmpty())
        {
            ok = true;
            this->ui->labelVacioDirF->setText("Falta información");
        }
    if (strtel.isEmpty())
        {
            ok = true;
            this->ui->labelVacioTelf->setText("Falta información");
        }
    if (tienda->TotalProductos()>0)
        {
            ok = true;
            this->ui->labelCrearRep->setText("Ya existe una tienda");
        }
    if(!ok)
        {
            tienda = new Tarea3::Tienda(strnombre.toStdString(),strdiri.toStdString(),strdirf.toStdString(),strtel.toStdString());
            this->ui->labelVacioNombre->setText("");
            this->ui->labelVacioDirI->setText("");
            this->ui->labelVacioDirF->setText("");
            this->ui->labelVacioTelf->setText("");
        }
}


void MainWindow::on_BotonModificar_clicked()
{
    modifyProduct modifyProduct(this);
        int result = modifyProduct.exec();
        if (result == QDialog::Accepted) {
            tienda->ModificarProductoTienda(modifyProduct.ObtenerID(),modifyProduct.ObtenerNombre(),modifyProduct.ObtenerExistencia());
            QString productoLista = (QString::number(modifyProduct.ObtenerID())+" "+QString::fromStdString(modifyProduct.ObtenerNombre())+" "+QString::number(modifyProduct.ObtenerExistencia()));
                QList<QListWidgetItem *> list = ui->listaEditable->findItems(QString::fromStdString(modifyProduct.ObtenerNombrePorCambiar()), Qt::MatchContains);
                for ( QListWidgetItem *item : list ){
                    item->setText(productoLista);
                }

        } else {
            QMessageBox* msgbox = new QMessageBox(this);
            msgbox->setWindowTitle("Título del diálogo");
            msgbox->setText("Cancelado");
            msgbox->open();
        }
}


void MainWindow::on_BotonEliminar_clicked()
{
    try
    {
    deleteProduct deleteProduct(this);
        int result = deleteProduct.exec();
        if (result == QDialog::Accepted) {
            tienda->EliminarProductoTienda(deleteProduct.ObtenerID());
                QList<QListWidgetItem *> list = ui->listaEditable->findItems(QString::fromStdString(deleteProduct.ObtenerNombre()), Qt::MatchContains);
                for ( QListWidgetItem *item : list ){
                   delete ui->listaEditable->takeItem(ui->listaEditable->row(item));
                }

        } else {
            QMessageBox* msgbox = new QMessageBox(this);
            msgbox->setWindowTitle("Título del diálogo");
            msgbox->setText("Cancelado");
            msgbox->open();
        }
    }/*
    catch (const ExcepcionProductoNoExiste& e)
    {
        QMessageBox* msgbox = new QMessageBox(this);
        msgbox->setWindowTitle("Título del diálogo");
        msgbox->setText("Error en la suma");
        msgbox->open();
    }*/
    catch (char const*message)
    {
            QMessageBox* msgbox = new QMessageBox(this);
            msgbox->setWindowTitle("Título del diálogo");
            msgbox->setText("Error");
            msgbox->open();

            //this->ui->editResultado->setText("Error!");
    }

}


void MainWindow::on_BotonGuardarStream_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,
                "Guardar archivo de datos", "",
                tr("Archivo de datos (*.dat);;All Files (*)"));


        if (fileName != "")
        {
            // Convertir QString a std::string
            std::string name = fileName.toStdString();

            std::ofstream archivoSalida;
            archivoSalida.open(name, std::ios::out|std::ios::binary);

            if (!archivoSalida.is_open())
            {
                QMessageBox *msgbox = new QMessageBox(this);
                msgbox->setWindowTitle("Error");
                msgbox->setText("Error al guardar archivo");
                msgbox->open();
                return;
            }

            tienda->GuardarEnStreamBinario(&archivoSalida);
            archivoSalida.close();
        }
}


void MainWindow::on_BotonCargarStream_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                "Abrir archivo de datos", "",
                tr("Archivo de datos (*.dat);;All Files (*)"));


        if (fileName != "")
        {
            // Convertir QString a std::string
            std::string name = fileName.toStdString();

            std::ifstream archivoEntrada;
                    archivoEntrada.open(name, std::ios::in|std::ios::binary);

                    if (!archivoEntrada.is_open())
                    {
                        QMessageBox *msgbox = new QMessageBox(this);
                        msgbox->setWindowTitle("Error");
                        msgbox->setText("Error al cargar archivo");
                        msgbox->open();
                        return;
                    }

                    tienda->CargarDesdeStreamBinario(&archivoEntrada);
                    this->ui->nombretienda->setText(QString::fromStdString(tienda->ObtenerNombreTienda()));
                    this->ui->direccionfisica->setText(QString::fromStdString(tienda->ObtenerDireccionFisica()));
                    this->ui->direccioninternet->setText(QString::fromStdString(tienda->ObtenerDireccionInternet()));
                    this->ui->telefono->setText(QString::fromStdString(tienda->ObtenerTelefono()));

                    for (Tarea3::Producto *producto : tienda->productos)
                    {
                        std::ostringstream streamSalida {};
                        streamSalida << producto;
                        std::string productostr = streamSalida.str();
                        QString productoLista = QString::fromStdString(productostr);
                        this->ui->listaEditable->addItem(productoLista);
                    }


        }
}


