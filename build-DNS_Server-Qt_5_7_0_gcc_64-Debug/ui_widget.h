/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *lblMensaje;
    QPushButton *btnIniciar;
    QPushButton *btnEnviar;
    QPushButton *btnSalir;
    QLineEdit *txfMensaje;
    QSpinBox *sbxPuerto;
    QLabel *lblPuerto;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(361, 118);
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 10, 321, 90));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lblMensaje = new QLabel(widget);
        lblMensaje->setObjectName(QStringLiteral("lblMensaje"));

        gridLayout->addWidget(lblMensaje, 0, 0, 1, 2);

        btnIniciar = new QPushButton(widget);
        btnIniciar->setObjectName(QStringLiteral("btnIniciar"));

        gridLayout->addWidget(btnIniciar, 1, 2, 1, 1);

        btnEnviar = new QPushButton(widget);
        btnEnviar->setObjectName(QStringLiteral("btnEnviar"));

        gridLayout->addWidget(btnEnviar, 1, 3, 1, 1);

        btnSalir = new QPushButton(widget);
        btnSalir->setObjectName(QStringLiteral("btnSalir"));

        gridLayout->addWidget(btnSalir, 1, 4, 1, 1);

        txfMensaje = new QLineEdit(widget);
        txfMensaje->setObjectName(QStringLiteral("txfMensaje"));

        gridLayout->addWidget(txfMensaje, 0, 2, 1, 3);

        sbxPuerto = new QSpinBox(widget);
        sbxPuerto->setObjectName(QStringLiteral("sbxPuerto"));
        sbxPuerto->setMinimum(1);
        sbxPuerto->setMaximum(65535);

        gridLayout->addWidget(sbxPuerto, 2, 2, 1, 3);

        lblPuerto = new QLabel(widget);
        lblPuerto->setObjectName(QStringLiteral("lblPuerto"));

        gridLayout->addWidget(lblPuerto, 2, 0, 1, 2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        lblMensaje->setText(QApplication::translate("Widget", "Mensaje:", 0));
        btnIniciar->setText(QApplication::translate("Widget", "Iniciar", 0));
        btnEnviar->setText(QApplication::translate("Widget", "Enviar", 0));
        btnSalir->setText(QApplication::translate("Widget", "Salir", 0));
        lblPuerto->setText(QApplication::translate("Widget", "Puerto:", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
