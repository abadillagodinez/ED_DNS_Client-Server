#include "viewer.h"
#include "ui_viewer.h"

Viewer::Viewer(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Viewer)
{
    ui->setupUi(this);
    setFixedSize(1280,720);
    view->setFixedSize(1280,720);
}

Viewer::~Viewer()
{
    delete ui;
}

void Viewer::setURL(string URL)
{
    this->URL = QString("https://") + QString::fromStdString(URL);
}

void Viewer::visible()
{
    view->load(QUrl(URL));
    view->setVisible(true);
}
