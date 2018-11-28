#ifndef WIDGET_H
#define WIDGET_H
#include "myserver.h"
#include <QWidget>
#include <QMessageBox>
#define PORT 5050

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btnIniciar_clicked();

    void on_btnSalir_clicked();

private:
    Ui::Widget *ui;
    myServer *mServer;
};

#endif // WIDGET_H
