#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "./../../lib/include/producto.h"
#include "./../../lib/include/tienda.h"
#include "addproduct.h"
#include <QFileDialog>
#include <QMessageBox>

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
            QString productoLista = (QString::number(addProduct.ObtenerID())+","+QString::fromStdString(addProduct.ObtenerNombre())+","+QString::number(addProduct.ObtenerExistencia()));
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
    QString strnombre = this->ui->nombretienda->text();
    QString strdiri = this->ui->direccioninternet->text();
    QString strdirf = this->ui->direccionfisica->text();
    QString strtel = this->ui->telefono->text();
    tienda = new Tarea3::Tienda(strnombre.toStdString(),strdiri.toStdString(),strdirf.toStdString(),strtel.toStdString());
}

