/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *contBusqueda;
    QPushButton *btnAbrir;
    QLineEdit *txfURL;
    QLabel *lblDire;
    QLineEdit *listAver;
    QPushButton *btnAbrir_2;
    QGroupBox *contConex;
    QLabel *lblServidor;
    QLabel *lblPuerto;
    QLineEdit *txfServidor;
    QSpinBox *sbxPuerto;
    QPushButton *btnConectar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 354);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        contBusqueda = new QGroupBox(centralWidget);
        contBusqueda->setObjectName(QStringLiteral("contBusqueda"));
        btnAbrir = new QPushButton(contBusqueda);
        btnAbrir->setObjectName(QStringLiteral("btnAbrir"));
        btnAbrir->setGeometry(QRect(281, 31, 80, 25));
        txfURL = new QLineEdit(contBusqueda);
        txfURL->setObjectName(QStringLiteral("txfURL"));
        txfURL->setGeometry(QRect(133, 31, 142, 25));
        lblDire = new QLabel(contBusqueda);
        lblDire->setObjectName(QStringLiteral("lblDire"));
        lblDire->setGeometry(QRect(11, 31, 116, 17));
        listAver = new QLineEdit(contBusqueda);
        listAver->setObjectName(QStringLiteral("listAver"));
        listAver->setGeometry(QRect(20, 70, 251, 25));
        btnAbrir_2 = new QPushButton(contBusqueda);
        btnAbrir_2->setObjectName(QStringLiteral("btnAbrir_2"));
        btnAbrir_2->setGeometry(QRect(280, 70, 80, 25));

        gridLayout->addWidget(contBusqueda, 1, 0, 1, 1);

        contConex = new QGroupBox(centralWidget);
        contConex->setObjectName(QStringLiteral("contConex"));
        lblServidor = new QLabel(contConex);
        lblServidor->setObjectName(QStringLiteral("lblServidor"));
        lblServidor->setGeometry(QRect(25, 31, 61, 17));
        lblPuerto = new QLabel(contConex);
        lblPuerto->setObjectName(QStringLiteral("lblPuerto"));
        lblPuerto->setGeometry(QRect(240, 31, 51, 17));
        txfServidor = new QLineEdit(contConex);
        txfServidor->setObjectName(QStringLiteral("txfServidor"));
        txfServidor->setGeometry(QRect(92, 31, 142, 25));
        sbxPuerto = new QSpinBox(contConex);
        sbxPuerto->setObjectName(QStringLiteral("sbxPuerto"));
        sbxPuerto->setGeometry(QRect(297, 31, 74, 26));
        sbxPuerto->setMinimum(1);
        sbxPuerto->setMaximum(65535);
        btnConectar = new QPushButton(contConex);
        btnConectar->setObjectName(QStringLiteral("btnConectar"));
        btnConectar->setGeometry(QRect(92, 63, 80, 25));

        gridLayout->addWidget(contConex, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DNS", 0));
        contBusqueda->setTitle(QApplication::translate("MainWindow", "B\303\272squeda", 0));
        btnAbrir->setText(QApplication::translate("MainWindow", "Consultar", 0));
        lblDire->setText(QApplication::translate("MainWindow", "Direcci\303\263n buscar:", 0));
        btnAbrir_2->setText(QApplication::translate("MainWindow", "Abrir", 0));
        contConex->setTitle(QApplication::translate("MainWindow", "Datos de conexi\303\263n", 0));
        lblServidor->setText(QApplication::translate("MainWindow", "Servidor:", 0));
        lblPuerto->setText(QApplication::translate("MainWindow", "Puerto:", 0));
        btnConectar->setText(QApplication::translate("MainWindow", "Conectar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
