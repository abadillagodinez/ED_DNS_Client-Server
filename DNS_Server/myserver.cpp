#include "myserver.h"
#include <QTcpSocket>
#include <QTextStream>

myServer::myServer(QObject *parent)
    : QTcpServer (parent)
{
    mSocket = 0;

    connect(this, &myServer::newConnection, [&]()
    {
       mSocket = nextPendingConnection();
       connect(mSocket, &QTcpSocket::readyRead, [&]()
       {
          QTextStream T(mSocket);
          recieve(T.readAll());
       });
    });

    splay = new SplayTree();
    leerDominios();
    splay->print();
    qDebug("\n----------------------------------\n");
}

void myServer::send(const QString &ms)
{
    if(mSocket)
    {
        QTextStream T(mSocket);
        T << ms;
        mSocket->flush();
    }
}

void myServer::recieve(const QString &ms)
{
    splay->search(ms.toStdString());
    if(splay->getRoot()->getDominio() == ms.toStdString())
    {
        splay->print();
        qDebug("\n----------------------------------\n");
        send("1");
    }
    else
    {
        splay->print();
        qDebug("\n----------------------------------\n");
        send("0");
    }
}

void myServer::leerDominios()
{
    string linea;
    ifstream archivo("/home/retr0/Escritorio/DNS_Server/dominios.txt");
    while(getline(archivo, linea))
    {
        string domin = "";
        string ip = "";
        for(int i = 0; i < linea.size(); i++)
        {
            if(linea[i] == ' ')
            {
                for(int j = i+1; j < linea.size(); j++)
                {
                    ip.push_back(linea[j]);
                }
                break;
            }
            else
                domin.push_back(linea[i]);
        }
        splay->insert(domin, ip);
    }
}
