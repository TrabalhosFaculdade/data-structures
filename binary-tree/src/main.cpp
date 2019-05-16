
#include <iostream>
#include <vector>

#include "node.h"
#include "node.cpp"
#include "tree.h"
#include "tree.cpp"

using namespace std;

void printTree(Tree<int> *tree)
{
    cout << "Values: ";
    vector<int> *elementsInOrder = tree->inOrder();
    for (unsigned int i = 0; i < elementsInOrder->size(); i++)
        cout << elementsInOrder->at(i) << " ";

    cout << "\n";
    delete elementsInOrder;
}

int main()
{
    Node<int> *root = new Node<int>(5, NULL);
    Tree<int> *tree = new Tree<int>(root);

    tree->insert(root, 3);
    tree->insert(root, 6);
    tree->insert(root, 2);
    tree->insert(root, 4);
    tree->insert(root, 7);
    tree->insert(root, 8);

    tree->erase(5);
    tree->erase(6);

    printTree(tree);

    return 0;
}
