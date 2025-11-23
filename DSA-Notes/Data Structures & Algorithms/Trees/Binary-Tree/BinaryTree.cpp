// Insertion and Deletion in Binary Tree

#include <iostream>
#include <queue>
using namespace std;

class Node{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

class BinaryTree{
public:
    Node *root;

    BinaryTree(){
        root = NULL;
    }

    // Insert Node Function
    // In a Binary tree, nodes are inserted in such a way that the tree fills from left to right.
    void insertNode(int val){
        Node *newNode = new Node(val);

        if (root == NULL){
            root = newNode;
            return;
        }

        queue<Node *> q;
        q.push(root);

        while (!q.empty()){
            Node *current = q.front();
            q.pop();

            if (current->left == NULL){
                current->left = newNode;
                return;
            }
            else{
                q.push(current->left);
            }

            if (current->right == NULL){
                current->right = newNode;
                return;
            }
            else{
                q.push(current->right);
            }
        }
    }

    // Deleting a Node function
    void deleteNode(int key){
        // If tree is empty
        if (root == NULL){
            cout << "Binary Tree is empty, so no node can be deleted" << endl;
            return;
        }

        // If tree has only one Node
        if (root->left == NULL && root->right == NULL){
            if (root->data == key){
                delete root;
                root = NULL;
            }
            return;
        }

        queue<Node *> q;
        q.push(root);

        Node *keyNode = NULL;
        Node *curr;
        Node *last;

        // Step 1: Find keyNode and lastNode (deepest rightmost node)
        // The deepest node is always the last node visited in level order traversal
        while (!q.empty()){
            curr = q.front();
            q.pop();

            if (curr->data == key){
                keyNode = curr;
            }

            if (curr->left != NULL){
                q.push(curr->left);
            }
            if (curr->right != NULL){
                q.push(curr->right);
            }

            last = curr;
            // after the loop ends → curr is the deepest rightmost node
        }

        // Step 2: Replace keyNode's data and delete deepest node

        // If keynode is found then this will execute
        if (keyNode != NULL){
            keyNode->data = last->data;

            queue<Node *> q2;
            q2.push(root);

            while (!q2.empty()){
                Node *temp = q2.front();
                q2.pop();

                if (temp->left){
                    // If the current node’s left child is the deepest node (last),we simply make it NULL & delete the last node
                    if (temp->left == last){
                        temp->left = NULL;
                        delete last;
                        return;
                    }
                    else{
                        q2.push(temp->left);
                    }
                }

                if (temp->right){
                    // If the current node’s right child is the deepest node (last),we simply make it NULL & delete the last node
                    if (temp->right == last){
                        temp->right = NULL;
                        delete last;
                        return;
                    }
                    else{
                        q2.push(temp->right);
                    }
                }
            }
        }
        else{
            // If thee keynode is not found
            cout << "Node with value " << key << " not found." << endl;
        }
    }

    //  Traversal Functiom
    void levelOrder(){
        if (root == NULL){
            cout << "Tree is empty." << endl;
            return;
        }

        queue<Node *> q;
        q.push(root);

        cout << "Tree nodes: ";
        while (!q.empty()){
            Node *curr = q.front();
            q.pop();
            cout << curr->data << " ";

            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
        cout << endl;
    }
};

int main(){

    BinaryTree tree;

    tree.insertNode(1);
    tree.insertNode(2);
    tree.insertNode(3);
    tree.insertNode(4);
    tree.insertNode(5);

    cout << "Before deletion:" << endl;
    tree.levelOrder();

    tree.deleteNode(3);

    cout << "\nAfter deletion:" << endl;
    tree.levelOrder();

    return 0;
}