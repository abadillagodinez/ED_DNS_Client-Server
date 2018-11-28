#ifndef SPLAYTREE_H
#define SPLAYTREE_H
#include <iostream>
#include <iomanip>
#include "binarynode.h"

using namespace std;
class SplayTree
{
public:
    SplayTree();
    void insert(string pDominio, string pIp);
    void search(string nombreLlave);
    void print();
    BinaryNode* getRoot();
    void setRoot(BinaryNode* pRoot);


private:
    BinaryNode *root;
    BinaryNode* splayFunc(BinaryNode* pRoot, string nombreLlave);
    BinaryNode* leftRotate(BinaryNode *pivote);
    BinaryNode* rightRotate(BinaryNode* pivote);
    BinaryNode* insertAux(BinaryNode* pRoot, string pDominio, string pIp);
    BinaryNode* searchAux(BinaryNode* pRoot, string nombreLlave);
    void postOrden(BinaryNode* pRoot, int ident);
};

#endif // SPLAYTREE_H
