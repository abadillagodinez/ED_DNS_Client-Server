#include <QCoreApplication>
#include "splaytree.h"
#include "myserver.h"
#include <iostream>
#include "widget.h"
#include <QApplication>

using namespace std;
int main(int argc, char *argv[])
{
    /*
    SplayTree* splay = new SplayTree();
    splay->insert("www.google.com", "172.217.8.100");
    splay->insert("www.youtube.com", "172.217.0.78");
    splay->insert("www.facebook.com", "172.217.0.78");
    splay->insert("www.wish.com", "www.youtube.com");
    splay->print();
    cout << endl << endl;
    splay->search("www.youtube.com");
    splay->print();

    cout << endl << endl;
    splay->search("www.facebook.com");
    splay->print();
    cout<<endl;
    */

    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();


}
