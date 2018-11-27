#include "binarynode.h"

BinaryNode::BinaryNode()
{

}

BinaryNode::BinaryNode(string pDominio, string pIp)
{
    dominio = pDominio;
    ip = pIp;
    leftChl = NULL;
    rightChl = NULL;
}

string BinaryNode::getDominio()
{
    return dominio;
}

string BinaryNode::getIp()
{
    return ip;
}

BinaryNode* BinaryNode::getLeft()
{
    return leftChl;
}

BinaryNode* BinaryNode::getRight()
{
    return rightChl;
}

void BinaryNode::setLeft(BinaryNode* pLeft)
{
    leftChl = pLeft;
}

void BinaryNode::setRight(BinaryNode* pRight)
{
    rightChl = pRight;
}
