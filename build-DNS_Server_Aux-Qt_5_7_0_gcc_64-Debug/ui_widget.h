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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QSpinBox *sbxPuerto;
    QPushButton *btnSalir;
    QLabel *lblPuerto;
    QPushButton *btnIniciar;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(359, 64);
        sbxPuerto = new QSpinBox(Widget);
        sbxPuerto->setObjectName(QStringLiteral("sbxPuerto"));
        sbxPuerto->setGeometry(QRect(90, 20, 74, 26));
        sbxPuerto->setMinimum(1);
        sbxPuerto->setMaximum(65535);
        btnSalir = new QPushButton(Widget);
        btnSalir->setObjectName(QStringLiteral("btnSalir"));
        btnSalir->setGeometry(QRect(260, 21, 80, 25));
        lblPuerto = new QLabel(Widget);
        lblPuerto->setObjectName(QStringLiteral("lblPuerto"));
        lblPuerto->setGeometry(QRect(20, 20, 51, 21));
        btnIniciar = new QPushButton(Widget);
        btnIniciar->setObjectName(QStringLiteral("btnIniciar"));
        btnIniciar->setGeometry(QRect(174, 21, 80, 25));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Server 2", 0));
        btnSalir->setText(QApplication::translate("Widget", "Salir", 0));
        lblPuerto->setText(QApplication::translate("Widget", "Puerto:", 0));
        btnIniciar->setText(QApplication::translate("Widget", "Iniciar", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
