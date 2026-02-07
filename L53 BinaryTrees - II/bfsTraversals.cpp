#include <iostream>
#include <climits>
#include <queue>
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

int levels(Node* root){
    if(root==NULL) return 0;
    return 1+ max(levels(root->left),levels(root->right) );
}

void nthLevel(Node* root, int curr, int level){//yeh function kisi particular row ke saare ele print kar deti hai
    if(root==NULL) return;
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    nthLevel(root->left, curr+1 , level);
    nthLevel(root->right, curr+1 , level);
}

void levelOrder(Node* root){    //using DFS
    int n = levels(root);
    for(int i = 1 ; i<= n ; i++){
        nthLevel(root, 1, i);
        cout<<endl;
    }
}

void LevelOrderQueue(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
    cout<<endl;
}

void nthLevelRev(Node* root, int curr, int level){
    if(root==NULL) return;
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    nthLevelRev(root->right, curr+1 , level);
    nthLevelRev(root->left, curr+1 , level);
}
int main() {
    Node* a = new Node(1);      //root node
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    // LevelOrderQueue(a);
    // nthLevel(a, 0, 2);
    // levelOrder(a);
    nthLevelRev(a, 0, 2);
    return 0;
}