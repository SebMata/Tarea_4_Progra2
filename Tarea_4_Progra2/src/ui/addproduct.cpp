#include "addproduct.h"
#include "ui_addproduct.h"
#include <QFileDialog>
#include <QMessageBox>

addProduct::addProduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addProduct)
{
    ui->setupUi(this);
}

addProduct::~addProduct()
{
    delete ui;
}

int addProduct::ObtenerID()
{
    QString stringID = this->ui->lineIdAgregar->text();
    int id = stringID.toInt();
    return id;
}

std::string addProduct::ObtenerNombre()
{
    QString stringNombre = this->ui->lineNombreAgregar->text();
    std::string nombre = stringNombre.toStdString();
    return nombre;
}

int addProduct::ObtenerExistencia()
{
    QString stringExistencia = this->ui->lineExistenciaAgregar->text();
    int existencia = stringExistencia.toInt();
    return existencia;
}
