#include <QCoreApplication>
#include "splaytree.h"
#include "myserver.h"
#include <iostream>
#include "widget.h"
#include <QApplication>

using namespace std;
int main(int argc, char *argv[])
{
    /* PROYECTO DEL SERVER #2 */

    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();


}
