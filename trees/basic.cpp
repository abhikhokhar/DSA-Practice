#include <bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

int countNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftNodes = countNodes(root->left);
    int rightNodes = countNodes(root->right);
    return leftNodes + rightNodes + 1;
}

int sumNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftSum = sumNodes(root->left);
    int rightSum = sumNodes(root->right);
    return leftSum + rightSum + root->data;
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    int nodes = countNodes(root);
    int sum = sumNodes(root);
    cout << sum << endl;
}