#ifndef DELETEPRODUCT_H
#define DELETEPRODUCT_H

#include <QDialog>

namespace Ui {
class deleteProduct;
}

class deleteProduct : public QDialog
{
    Q_OBJECT

public:
    explicit deleteProduct(QWidget *parent = nullptr);
    ~deleteProduct();
    int ObtenerID();
    std::string ObtenerNombre();

private:
    Ui::deleteProduct *ui;
};

#endif // DELETEPRODUCT_H
