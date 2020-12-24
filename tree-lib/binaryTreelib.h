#include <bits/stdc++.h>

struct node {
    int data;
    node* lchild;
    node* rchild;
};

class Tree{
public:
    struct node* root;
    
    Tree(){
        root = NULL;
    }

    Tree(int data){
        root = new node;
        root->lchild = NULL;
        root->rchild = NULL;
    }

    struct node* newnode(int data){
        struct node* temp = new node;
        temp->data = data;
        temp->lchild = NULL;
        temp->rchild = NULL;
        return temp;
    };

    bool noChildNode(struct node* root){
        if(root->rchild == NULL && root->lchild == NULL) return true;
        return false;
    }

    bool oneChildNode(struct node* root){
        if(root->rchild == NULL && root->lchild != NULL) return true;
        if(root->rchild != NULL && root->lchild == NULL) return true;
        return false;
    }

    bool twoChildNode(struct node* root){
        if (root->rchild != NULL && root->lchild != NULL) return true;
        return false;
    }

    struct node* minValueNode(struct node* root){
        struct node* curr = root;
        while(curr && curr->lchild != NULL) 
            curr = curr->lchild;
        return curr;
    }

    void inorder(struct node* root);
    void postorder(struct node* root);
    void preorder(struct node* root);
    void levelOrder(struct node* root);
    unsigned int height(struct node* root);
    int minE(struct node* root);
    int maxE(struct node* root);
    struct node* search(struct node* root, int val);
    struct node* insertNode(int data, struct node* root);
    struct node* deleteNode(struct node* root, int val);
    struct node* parentNode(struct node* root, int val);
};

void Tree::inorder(struct node* root){
    if (root == NULL) return;
    inorder(root->lchild);
    std::cout << root->data << " ";
    inorder(root->rchild);
}

void Tree::postorder(struct node* root){
    if(root==NULL) return;
    postorder(root->lchild);
    postorder(root->rchild);
    std::cout << root->data << " ";
}

void Tree::preorder(struct node* root){
    if(root==NULL) return;
    std::cout << root->data << " ";
    preorder(root->lchild);
    preorder(root->rchild);
}

void Tree::levelOrder(struct node* root){

}

unsigned int Tree::height(struct node* root){
    if (root == NULL) return 0;
    return 1 + std::max(height(root->rchild), height(root->lchild));
}

int Tree::minE(struct node* root){
    if(root->lchild == NULL) return root->data;
    return minE(root->lchild);
}

int Tree::maxE(struct node* root){
    if(root->rchild == NULL) return root->data;
    return maxE(root->rchild);
}

struct node* Tree::insertNode(int data, struct node* root){
    if (root == NULL){
        root = newnode(data);
        return root;
    }
    if (root->data < data){
        root->rchild = insertNode(data, root->rchild);
        return root;
    } if (root->data > data){
        root->lchild = insertNode(data, root->lchild);
        return root;
    }
    return root;
}

struct node* Tree::search(struct node* root, int val){
    if (root->data == val) return root;
    if (root->data > val) search(root->lchild, val);
    if (root->data < val) search(root->rchild, val);
    return NULL;
}

struct node* Tree::parentNode(struct node* root, int val){
    if(root->lchild->data == val || root->rchild->data == val) return root;
    if (root->data > val) return parentNode(root->lchild, val);
    if (root->data < val) return parentNode(root->rchild, val);
    // return root;
}

struct node* Tree::deleteNode(struct node* root, int val){
    if (root == NULL) return root;

    if (root->data > val){
        root->lchild = deleteNode(root->lchild, val);
    }

    else if (root->data < val){
        root->rchild = deleteNode(root->rchild, val);
    }

    else {
        if (root->lchild == NULL){
            struct node* newnode = root->rchild;
            delete root;
            return newnode;
        }
        else if ( root->rchild == NULL){
            struct node* newnode = root->lchild;
            delete root;
            return newnode;
        }
        struct node* temp = minValueNode(root->rchild);
        root->data = temp->data;
        root->rchild = deleteNode(root->rchild, temp->data);
    }
    return root;
}


