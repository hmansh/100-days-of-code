#include <bits/stdc++.h>
#include "binaryTreelib.h"
using namespace std;

int main(){
    Tree tree;
    tree.root = tree.insertNode(8, tree.root);
    tree.root = tree.insertNode(3, tree.root);
    tree.root = tree.insertNode(10, tree.root);
    tree.root = tree.insertNode(1, tree.root);
    tree.root = tree.insertNode(6, tree.root);
    tree.root = tree.insertNode(4, tree.root);
    tree.root = tree.insertNode(7, tree.root);
    tree.root = tree.insertNode(14, tree.root);
    cout << "INORDER : ";
    tree.inorder(tree.root); 
    cout << endl;
    cout << "POSTORDER : ";
    tree.postorder(tree.root);
    cout << endl;
    cout << "PREORDER : ";
    tree.preorder(tree.root);
    cout << endl;
    // tree.levelOrder(tree.root);
    cout << "MIN : " << tree.minE(tree.root) << endl;
    cout << "MAX : " << tree.maxE(tree.root) << endl;
    cout << "HEIGHT : " << tree.height(tree.root) << endl;
    tree.root = tree.deleteNode(tree.root, 4);
    tree.root = tree.deleteNode(tree.root, 7);
    tree.root = tree.deleteNode(tree.root, 1);
    cout << "INORDER : ";
    tree.inorder(tree.root); 
    cout << endl;
    cout << "MIN : " << tree.minE(tree.root) << endl;
    cout << "MAX : " << tree.maxE(tree.root) << endl;
    cout << "HEIGHT : " << tree.height(tree.root) << endl;
    return 0;
}