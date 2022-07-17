/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *nombretienda;
    QLabel *labelNombre;
    QLineEdit *direccioninternet;
    QLabel *labelDirI;
    QLineEdit *direccionfisica;
    QLabel *labelDirF_2;
    QLineEdit *telefono;
    QLabel *labelTlf;
    QLabel *labelTienda;
    QLabel *labelProducto;
    QPushButton *BotonAgregar;
    QPushButton *BotonModificar;
    QPushButton *BotonEliminar;
    QLabel *labelup;
    QLabel *labeldown;
    QPushButton *BotonGuardarTienda;
    QListWidget *listaEditable;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(925, 679);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        nombretienda = new QLineEdit(centralwidget);
        nombretienda->setObjectName(QString::fromUtf8("nombretienda"));
        nombretienda->setGeometry(QRect(160, 80, 141, 25));
        labelNombre = new QLabel(centralwidget);
        labelNombre->setObjectName(QString::fromUtf8("labelNombre"));
        labelNombre->setGeometry(QRect(90, 80, 67, 21));
        direccioninternet = new QLineEdit(centralwidget);
        direccioninternet->setObjectName(QString::fromUtf8("direccioninternet"));
        direccioninternet->setGeometry(QRect(160, 110, 141, 25));
        labelDirI = new QLabel(centralwidget);
        labelDirI->setObjectName(QString::fromUtf8("labelDirI"));
        labelDirI->setGeometry(QRect(20, 110, 131, 21));
        direccionfisica = new QLineEdit(centralwidget);
        direccionfisica->setObjectName(QString::fromUtf8("direccionfisica"));
        direccionfisica->setGeometry(QRect(160, 140, 141, 25));
        labelDirF_2 = new QLabel(centralwidget);
        labelDirF_2->setObjectName(QString::fromUtf8("labelDirF_2"));
        labelDirF_2->setGeometry(QRect(40, 140, 111, 21));
        telefono = new QLineEdit(centralwidget);
        telefono->setObjectName(QString::fromUtf8("telefono"));
        telefono->setGeometry(QRect(160, 170, 141, 25));
        labelTlf = new QLabel(centralwidget);
        labelTlf->setObjectName(QString::fromUtf8("labelTlf"));
        labelTlf->setGeometry(QRect(80, 170, 67, 21));
        labelTienda = new QLabel(centralwidget);
        labelTienda->setObjectName(QString::fromUtf8("labelTienda"));
        labelTienda->setGeometry(QRect(20, 40, 91, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Vemana2000")});
        font.setBold(true);
        labelTienda->setFont(font);
        labelProducto = new QLabel(centralwidget);
        labelProducto->setObjectName(QString::fromUtf8("labelProducto"));
        labelProducto->setGeometry(QRect(480, 40, 121, 31));
        labelProducto->setFont(font);
        BotonAgregar = new QPushButton(centralwidget);
        BotonAgregar->setObjectName(QString::fromUtf8("BotonAgregar"));
        BotonAgregar->setGeometry(QRect(480, 380, 89, 25));
        BotonModificar = new QPushButton(centralwidget);
        BotonModificar->setObjectName(QString::fromUtf8("BotonModificar"));
        BotonModificar->setGeometry(QRect(620, 380, 89, 25));
        BotonEliminar = new QPushButton(centralwidget);
        BotonEliminar->setObjectName(QString::fromUtf8("BotonEliminar"));
        BotonEliminar->setGeometry(QRect(760, 380, 89, 25));
        labelup = new QLabel(centralwidget);
        labelup->setObjectName(QString::fromUtf8("labelup"));
        labelup->setGeometry(QRect(0, -4, 931, 31));
        labelup->setStyleSheet(QString::fromUtf8("color: rgb(52, 101, 164);\n"
"background-color: rgb(52, 101, 164);"));
        labeldown = new QLabel(centralwidget);
        labeldown->setObjectName(QString::fromUtf8("labeldown"));
        labeldown->setGeometry(QRect(0, 600, 931, 31));
        labeldown->setStyleSheet(QString::fromUtf8("color: rgb(52, 101, 164);\n"
"background-color: rgb(52, 101, 164);"));
        BotonGuardarTienda = new QPushButton(centralwidget);
        BotonGuardarTienda->setObjectName(QString::fromUtf8("BotonGuardarTienda"));
        BotonGuardarTienda->setGeometry(QRect(160, 200, 89, 25));
        listaEditable = new QListWidget(centralwidget);
        listaEditable->setObjectName(QString::fromUtf8("listaEditable"));
        listaEditable->setGeometry(QRect(480, 70, 371, 301));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 925, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelNombre->setText(QCoreApplication::translate("MainWindow", "Nombre", nullptr));
        labelDirI->setText(QCoreApplication::translate("MainWindow", "Direccion Internet", nullptr));
        labelDirF_2->setText(QCoreApplication::translate("MainWindow", "Direccion Fisica", nullptr));
        labelTlf->setText(QCoreApplication::translate("MainWindow", "Telefono", nullptr));
        labelTienda->setText(QCoreApplication::translate("MainWindow", "TIENDA", nullptr));
        labelProducto->setText(QCoreApplication::translate("MainWindow", "PRODUCTOS", nullptr));
        BotonAgregar->setText(QCoreApplication::translate("MainWindow", "Agregar", nullptr));
        BotonModificar->setText(QCoreApplication::translate("MainWindow", "Modificar", nullptr));
        BotonEliminar->setText(QCoreApplication::translate("MainWindow", "Eliminar", nullptr));
        labelup->setText(QString());
        labeldown->setText(QString());
        BotonGuardarTienda->setText(QCoreApplication::translate("MainWindow", "Guardar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
