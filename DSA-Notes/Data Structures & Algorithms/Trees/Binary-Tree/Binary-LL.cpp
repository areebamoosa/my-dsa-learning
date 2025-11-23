// Implementation of Binary tree using Linkedlist

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* parent;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        parent = left = right = NULL;
    }
};

class BinaryTree {
public:
    Node* root;
    long size;

    BinaryTree() {
        root = NULL;
        size = 0;
    }

    ~BinaryTree() {
        destroyTree(root);
    }

    void destroyTree(Node* node) {
        if (node == NULL) return;
        destroyTree(node->left);
        destroyTree(node->right);
        delete node;
    }

    Node* createNode(int value) {
        size++;
        return new Node(value);
    }

    void insertLeft(Node* parent, int value) {
        if (parent == NULL) return;
        Node* newNode = createNode(value);
        parent->left = newNode;
        newNode->parent = parent;
    }

    void insertRight(Node* parent, int value) {
        if (parent == NULL) return;
        Node* newNode = createNode(value);
        parent->right = newNode;
        newNode->parent = parent;
    }

    void preorder(Node* node) {
        if (node == NULL) return;
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }
};

int main() {
    BinaryTree tree;

    tree.root = tree.createNode(1);

    tree.insertLeft(tree.root, 2);
    tree.insertRight(tree.root, 3);

    tree.insertLeft(tree.root->left, 4);
    tree.insertRight(tree.root->left, 5);

    cout << "Preorder Traversal: ";
    tree.preorder(tree.root);


    return 0;
}
