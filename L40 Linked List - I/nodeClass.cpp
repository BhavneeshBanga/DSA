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
int main() {
    // 10 20 30 40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    //forming linklist
    a.next = &b;
    b.next = &c;
    c.next = &d;
    // cout<<b.val;

    Node* ptr = &b;
    cout<<(*ptr).val;

    (*ptr).val = 60;
    cout<<b.val;
    cout<<a.next->next->next->val;
    
    // cout<<(*(a.next)).val;x
    // cout<<a.next->val;
    
    // a.next->val = 70;
    // cout<<b.val;

    // ((a.next)->next)->val;
    // cout<<((a.next)->next)->val;

    // cout<<(*((*((*(a.next)).next)).next)).val;
    // cout<<(((a.next)->next)->next)->val;

    Node temp = a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL){
            break;
        }
        temp = (*(temp.next));
    }

    return 0;
}