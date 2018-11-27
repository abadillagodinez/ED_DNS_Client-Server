#ifndef VIEWER_H
#define VIEWER_H
#include <QWebEngineView>
#include <QFrame>
#include <iostream>

using namespace std;
namespace Ui {
class Viewer;
}

class Viewer : public QFrame
{
    Q_OBJECT

public:
    explicit Viewer(QWidget *parent = nullptr);
    ~Viewer();
    void setURL(string URL);
    void visible();

private:
    Ui::Viewer *ui;
    QWebEngineView *view = new QWebEngineView(this);
    QString URL;
};

#endif // VIEWER_H
