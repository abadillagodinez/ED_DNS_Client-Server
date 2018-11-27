#ifndef BINARYNODE_H
#define BINARYNODE_H
#include <iostream>

using namespace std;
class BinaryNode
{
public:
    BinaryNode();
    BinaryNode(string pDominio, string pIp);
    string getDominio();
    string getIp();
    BinaryNode* getLeft();
    BinaryNode* getRight();
    void setLeft(BinaryNode* pLeft);
    void setRight(BinaryNode* pRight);


private:
   string dominio;
   string ip;
   BinaryNode *leftChl;
   BinaryNode *rightChl;
};

#endif // BINARYNODE_H
