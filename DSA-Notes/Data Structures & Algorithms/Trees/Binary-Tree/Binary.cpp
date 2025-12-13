#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;
Node* buildTree(vector<int> preorder){

    idx++;

    if (preorder[idx] == -1) {
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder); // Left Subtree
    root->right = buildTree(preorder); // Right Subtree

    return root;

}

// Pre Order Traversal
void preOrder(Node* root){
    if ( root == NULL){
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// InOrder Traversal
void inOrder(Node* root){
    if ( root == NULL){
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

// Post Order Traversal
void postOrder(Node* root){
    if ( root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

// Level Order Traversal
void levelOrder(Node* root){
    queue<Node*> q;

    q.push(root);
    q.push(NULL); 

    while(q.size() > 0){
        Node* curr = q.front();
        q.pop();

        cout << curr->data << " ";

        if (curr->left != NULL){
            q.push(curr->left);
        }
        if (curr->right != NULL){
            q.push(curr->right);
        }
    }

    cout << endl;
}

int main(){

    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildTree(preorder);

    cout << "Pre Order Traversal"<< endl;

    preOrder(root);
    cout << endl;

    cout << "In Order Traversal"<< endl;
    inOrder(root);
    cout << endl;

    cout << "Post Order Traversal"<< endl;
    postOrder(root);
    cout << endl;

    cout << "Level Order Traversal"<< endl;
    levelOrder(root);
    cout << endl;

    return 0;
}