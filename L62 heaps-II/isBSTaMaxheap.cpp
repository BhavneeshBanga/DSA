// check if a given biary tree is a max heap or not
#include <iostream>
#include <queue>
using namespace std;
class Node{
    public:
        int val;
        Node* left = NULL;
        Node* right = NULL;

        Node(int val){
            this->val = val;
        }
};
int SizeOfTree(Node* root){
    if(root==NULL) return 0;
    return 1 + SizeOfTree(root->left) + SizeOfTree(root->right);
}

bool isCBT(Node* root){
    int size = SizeOfTree(root);
    int count = 0;
    queue<Node*> q;
    q.push(root);
    while(count < size){
        Node* temp = q.front();
        q.pop();
        count++;
        if(temp!=NULL){
            q.push(temp->left);
            q.push(temp->right);
        } 
    }
    if(q.size() > 0){
        Node* temp = q.front();
        if(temp!=NULL) return false;
        q.pop();
    }
    else return true;
}

bool isMAX(Node* root){
    if(root==NULL) return false;
    if(root->left!=NULL && root->val < root->left->val) return false;
    if(root->right!=NULL && root->val < root->right->val) return false;
    return isMAX(root->left) && isMAX(root->right);
}
int main() {
    Node* a = new Node(20);
    Node* b = new Node(15);
    Node* c = new Node(10);
    Node* d = new Node(8);
    Node* e = new Node(11);
    Node* f = new Node(6);
    Node* g = NULL;
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    if(isCBT(a) && isMAX(a)) cout<<"Tree is MaxHeap!!\n";
    else cout<<"Tree is Not MaxHeap\n";
}