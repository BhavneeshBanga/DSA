#include <iostream>
using namespace std;
class Node{     //link list node
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void display_rec(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    display_rec(head->next);
}
void rev_display(Node* head){
    if(head==NULL) return;
    rev_display(head->next);
    cout<<head->val<<" ";
}
int size(Node* head){
    Node* temp = head;
    int n = 0;
    while(temp!=NULL){
        n++;
        temp = temp->next;
    }
    return n;
}
int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    // cout<<size(a);
    // display_rec(a);
    // rev_display(a);
    display(a);

    // cout<<a->next->next->next->val;
}