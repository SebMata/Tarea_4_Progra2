#include "deleteproduct.h"
#include "ui_deleteproduct.h"

deleteProduct::deleteProduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteProduct)
{
    ui->setupUi(this);
}

deleteProduct::~deleteProduct()
{
    delete ui;
}

int deleteProduct::ObtenerID()
{
    QString stringID = this->ui->lineIdEliminar->text();
    int id = stringID.toInt();
    return id;
}

std::string deleteProduct::ObtenerNombre()
{
    QString stringNombre = this->ui->lineNombreEliminar->text();
    std::string nombre = stringNombre.toStdString();
    return nombre;
}
