#ifndef MODIFYPRODUCT_H
#define MODIFYPRODUCT_H

#include <QDialog>

namespace Ui {
class modifyProduct;
}

class modifyProduct : public QDialog
{
    Q_OBJECT

public:
    explicit modifyProduct(QWidget *parent = nullptr);
    ~modifyProduct();
    int ObtenerID();
    std::string ObtenerNombre();
    int ObtenerExistencia();
    std::string ObtenerNombrePorCambiar();

private:
    Ui::modifyProduct *ui;
};

#endif // MODIFYPRODUCT_H
