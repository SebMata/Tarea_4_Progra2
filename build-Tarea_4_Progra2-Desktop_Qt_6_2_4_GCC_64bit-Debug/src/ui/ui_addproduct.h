/********************************************************************************
** Form generated from reading UI file 'addproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPRODUCT_H
#define UI_ADDPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addProduct
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *labelID;
    QLineEdit *lineIdAgregar;
    QLabel *labelNombreProducto;
    QLineEdit *lineNombreAgregar;
    QLabel *labelExistencia;
    QLineEdit *lineExistenciaAgregar;

    void setupUi(QDialog *addProduct)
    {
        if (addProduct->objectName().isEmpty())
            addProduct->setObjectName(QString::fromUtf8("addProduct"));
        addProduct->resize(400, 300);
        buttonBox = new QDialogButtonBox(addProduct);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(addProduct);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(20, 10, 351, 221));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        labelID = new QLabel(formLayoutWidget);
        labelID->setObjectName(QString::fromUtf8("labelID"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelID);

        lineIdAgregar = new QLineEdit(formLayoutWidget);
        lineIdAgregar->setObjectName(QString::fromUtf8("lineIdAgregar"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineIdAgregar);

        labelNombreProducto = new QLabel(formLayoutWidget);
        labelNombreProducto->setObjectName(QString::fromUtf8("labelNombreProducto"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelNombreProducto);

        lineNombreAgregar = new QLineEdit(formLayoutWidget);
        lineNombreAgregar->setObjectName(QString::fromUtf8("lineNombreAgregar"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineNombreAgregar);

        labelExistencia = new QLabel(formLayoutWidget);
        labelExistencia->setObjectName(QString::fromUtf8("labelExistencia"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelExistencia);

        lineExistenciaAgregar = new QLineEdit(formLayoutWidget);
        lineExistenciaAgregar->setObjectName(QString::fromUtf8("lineExistenciaAgregar"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineExistenciaAgregar);


        retranslateUi(addProduct);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, addProduct, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, addProduct, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addProduct);
    } // setupUi

    void retranslateUi(QDialog *addProduct)
    {
        addProduct->setWindowTitle(QCoreApplication::translate("addProduct", "Dialog", nullptr));
        labelID->setText(QCoreApplication::translate("addProduct", "ID", nullptr));
        labelNombreProducto->setText(QCoreApplication::translate("addProduct", "Nombre", nullptr));
        labelExistencia->setText(QCoreApplication::translate("addProduct", "Existencia", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addProduct: public Ui_addProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPRODUCT_H
