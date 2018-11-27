#include "viewer.h"
#include "ui_viewer.h"

Viewer::Viewer(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Viewer)
{
    ui->setupUi(this);
}

Viewer::~Viewer()
{
    delete ui;
}

void Viewer::setURL(string URL)
{
    this->URL = QString::fromStdString(URL);
}

void Viewer::visible()
{
    view->load(QUrl(URL));
    view->setVisible(true);
}
