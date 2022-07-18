#include "modifyproduct.h"
#include "ui_modifyproduct.h"

modifyProduct::modifyProduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifyProduct)
{
    ui->setupUi(this);
}

modifyProduct::~modifyProduct()
{
    delete ui;
}

int modifyProduct::ObtenerID()
{
    QString stringID = this->ui->lineIdModificar->text();
    int id = stringID.toInt();
    return id;
}

std::string modifyProduct::ObtenerNombre()
{
    QString stringNombre = this->ui->lineNombreModificar->text();
    std::string nombre = stringNombre.toStdString();
    return nombre;
}

std::string modifyProduct::ObtenerNombrePorCambiar()
{
    QString stringNombreCambiar = this->ui->lineNombreCambiar->text();
    std::string nombreCambiar = stringNombreCambiar.toStdString();
    return nombreCambiar;
}

int modifyProduct::ObtenerExistencia()
{
    QString stringExistencia = this->ui->lineExistenciaModificar->text();
    int existencia = stringExistencia.toInt();
    return existencia;
}
