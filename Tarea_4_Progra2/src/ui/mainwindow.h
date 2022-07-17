#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "./../../lib/include/producto.h"
#include "./../../lib/include/tienda.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_BotonAgregar_clicked();

    void on_BotonGuardarTienda_clicked();

private:
    Ui::MainWindow *ui;
    Tarea3::Tienda *tienda;
};
#endif // MAINWINDOW_H
