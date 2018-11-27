#include "splaytree.h"

SplayTree::SplayTree()
{
    root = NULL;
}

BinaryNode* SplayTree::leftRotate(BinaryNode* pivote)
{
    BinaryNode* der = pivote->getRight();
    pivote->setRight(der->getLeft());
    der->setLeft(pivote);
    return der;
}

BinaryNode* SplayTree::rightRotate(BinaryNode* pivote)
{
    BinaryNode* izq = pivote->getLeft();
    pivote->setLeft(izq->getRight());
    izq->setRight(pivote);
    return izq;
}

BinaryNode* SplayTree::splayFunc(BinaryNode* pRoot, string nombreLlave)
{
    if (pRoot == NULL || pRoot->getDominio() == nombreLlave)
            return pRoot;

        if (pRoot->getDominio() > nombreLlave)
        {
            if (pRoot->getLeft() == NULL) return pRoot;

            // Zig-Zig (Left Left)
            if (pRoot->getLeft()->getDominio() > nombreLlave)
            {
                pRoot->getLeft()->setLeft(splayFunc(pRoot->getLeft()->getLeft(), nombreLlave));

                pRoot = rightRotate(pRoot);
            }
            else if (pRoot->getLeft()->getDominio() < nombreLlave) // Zig-Zag (Left Right)
            {
                pRoot->getLeft()->setRight(splayFunc(pRoot->getLeft()->getRight(), nombreLlave));

                if (pRoot->getLeft()->getRight() != NULL)
                    pRoot->setLeft(leftRotate(pRoot->getLeft()));
            }

            return (pRoot->getLeft() == NULL)? pRoot: rightRotate(pRoot);
        }
        else
        {
            if (pRoot->getRight() == NULL) return pRoot;

            // Zag-Zig (Right Left)
            if (pRoot->getRight()->getDominio() > nombreLlave)
            {
                pRoot->getRight()->setLeft(splayFunc(pRoot->getRight()->getLeft(), nombreLlave));

                if (pRoot->getRight()->getLeft() != NULL)
                    pRoot->setRight(rightRotate(pRoot->getRight()));
            }
            else if (pRoot->getRight()->getDominio() < nombreLlave)// Zag-Zag (Right Right)
            {
                pRoot->getRight()->setRight(splayFunc(pRoot->getRight()->getRight(), nombreLlave));
                pRoot = leftRotate(pRoot);
            }

            return (pRoot->getRight() == NULL)? pRoot: leftRotate(pRoot);
        }
}

void SplayTree::insert(string pDominio, string pIp)
{
    root = insertAux(root, pDominio, pIp);
}

BinaryNode* SplayTree::insertAux(BinaryNode* pRoot, string pDominio, string pIp)
{
    if(pRoot == NULL)
        return new BinaryNode(pDominio, pIp);
    pRoot = splayFunc(pRoot, pDominio);

    if(pRoot->getDominio() == pDominio)
        return pRoot;

    BinaryNode* newNode = new BinaryNode(pDominio, pIp);

    if(pRoot->getDominio() > pDominio)
    {
        newNode->setRight(pRoot);
        newNode->setLeft(pRoot->getLeft());
        pRoot->setLeft(NULL);
    }
    else if(pRoot->getDominio() < pDominio)
    {
        newNode->setLeft(pRoot);
        newNode->setRight(pRoot->getRight());
        pRoot->setRight(NULL);
    }
    return newNode;
}

void SplayTree::print()
{
    postOrden(root, 0);
}

void SplayTree::postOrden(BinaryNode* pRoot, int ident)
{
    if(pRoot)
    {
        if(pRoot->getRight())
            postOrden(pRoot->getRight(), ident+4);
        if(ident)
            cout << setw(ident) << ' ';
        if(pRoot->getRight())
            cout << " /\n" << setw(ident) << ' ';
        cout << pRoot->getDominio() << endl;
        if(pRoot->getLeft())
        {
            cout << setw(ident) << ' ' << " \\\n";
            postOrden(pRoot->getLeft(), ident+4);
        }
    }
}

BinaryNode* SplayTree::getRoot()
{
    return root;
}

void SplayTree::setRoot(BinaryNode* pRoot)
{
    root = pRoot;
}

void SplayTree::search(string nombreLlave)
{
    root = searchAux(root, nombreLlave);
}

BinaryNode* SplayTree::searchAux(BinaryNode* pRoot, string nombreLlave)
{
    return splayFunc(pRoot, nombreLlave);
}
