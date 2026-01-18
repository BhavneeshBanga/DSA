#include <iostream>
#include <climits>
using namespace std;
class Node{
    public:
        int val;
        Node* left;
        Node* right;
        Node(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        } 
};

void displayTree(Node* root){       
    if(root == NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}

int Sum(Node* root){
    if(root==NULL) return 0;
    int leftSum =  Sum(root->left);
    int rightSum =  Sum(root->right);
    int ans = root ->val + leftSum + rightSum;
}

int size(Node* root){
    if(root==NULL) return 0;
    int ans = 1 + size(root->left) + size(root->right);
}

int maxInTree(Node* root){
    if(root==NULL) return INT_MIN;
    int lMax = maxInTree(root->left);
    int rMax = maxInTree(root->right);
    return max(root->val, max(lMax, rMax));
}

int noOfLevels(Node* root){
    if(root==NULL) return 0;
    return 1 + max(noOfLevels(root->left), noOfLevels(root->right));
}

int main() {
    Node* a = new Node(1);      //root node
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    Node* h = new Node(10);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    g->right = h;

    displayTree(a);

    // cout<<"\nThe sum of the tree is "<<Sum(a);

    // cout<<"\nThe size of the tree is "<<size(a)<<endl;

    // cout<<"\nThe maximun value of the tree is "<<maxInTree(a);

    // cout<<"\nThe  no of levels in this tree is "<<noOfLevels(a)<<endl;
    
    return 0;
}