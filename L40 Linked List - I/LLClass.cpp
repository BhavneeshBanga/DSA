// #include <iostream>
// using namespace std;
// class Node{     //link list node
//     public:
//         int val;
//         Node* next;
//         Node(int val){
//             this->val = val;
//             this->next = NULL;
//         }
// };
// class LinkedList{       //user defined data structure
//     public:
//         Node* head;
//         Node* tail;
//         int size;
//         LinkedList(){
//             head = tail = NULL;
//             size = 0;
//         }
//         void insertAtTa(int val){
//             Node* temp = new Node(val);
//             if(size==0) head = tail = temp;     //case 2 size = 0
//             else{
//                 tail->next = temp;  // case 1 size != 0
//                 tail = temp;
//             }
//             size++;
//         }
//         void display(){
//             Node* temp = head;
//             while(temp!=NULL){
//                 cout<<temp->val<<" ";
//                 temp = temp->next;
//             }
//             cout<<endl;
//         }
// };
// int main() {
//     LinkedList ll;
//     ll.insertAtTa(10);
//     ll.display();
//     ll.insertAtTa(20);
//     ll.display();
//     ll.insertAtTa(30);
//     ll.display();
//     ll.insertAtTa(40);
//     ll.display();
//     cout<<ll.size;
    
//     return 0;
// }

#include <iostream>
using namespace std;
class Node{              //User defined data tpe
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};
class LinkedList{              //user defined data structure
    public:
        Node* head;
        Node* tail;
        int size;
        LinkedList(){
            head = tail = NULL;
            size = 0;
        }
        void insertAtIdx(int idx, int val){
            if(idx<0 || idx>size) cout<<"Invalid index"<<endl;
            else if(idx == 0) insertAthead(val);
            else if(idx == size) insertAtTail(val);
            else{
                Node* t = new Node(val);
                Node* temp = head;
                for(int i = 0 ; i<idx-1 ; i++){
                    temp = temp->next;
                }
                t->next = temp->next;
                temp->next = t;
                size++;
            }  
        }
        void insertAtTail(int val){
            Node* temp = new Node(val);
            if(size==0){
                head = tail = temp;
            }
            else{
                tail->next = temp;
                tail = temp;
            }
            size++;
        }
        void insertAthead(int val){
            Node* temp = new Node(val);
            if(size==0){
                head = tail = temp;
            }
            else{
                temp->next = head;
                head = temp;
            }
            size++;
        }
        void deleteAthead(){
            if(size==0) {
                cout<<"List is Empty" ;
                return;
            }
            head = head->next;
            size--;
        }
        void display(){
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->val<<" ";
                temp = temp->next; 
            }
            cout<<endl;
        }
        int getAtIdx(int idx){
            if(idx<0 || idx>=size){
                cout<<"Invalid Index";
                return -1;
            } 
            else if(idx ==0 ) return head->val;
            else if (idx == size-1) return tail->val;
            else{
                Node* temp = head;
                for(int i = 1 ; i<=idx ; i++){
                    temp = temp->next;
                }
                return temp->val;
            }
        }
        void deleteAtTail(){
            if(size==0) {
                cout<<"List is Empty";
                return;
            }
            Node* temp = head;
            while(temp->next!=tail){
                temp = temp->next;
            }
            temp->next=NULL;
            tail = temp;
            size--;
        }
        void deleteAtIdx(int idx){
            if(size ==0 ){
                cout<<"List is empty";
                return;
            }
            else if(idx<0 || idx>=size){
                cout<<"Invlaid Index";
                return ;
            }
            else if(idx==0){
                return deleteAthead();
            }
            else if(idx==size-1) return deleteAtTail();
            else{
                Node*temp = head;
                for(int i = 0 ; i<=idx-1 ; i++){
                    temp = temp->next;
                }
                temp->next = temp->next->next;
                size--;
            }
        }
};

int main() {
    LinkedList ll;                 //  { }
    ll.insertAtTail(10);
    ll.display();
    ll.insertAtTail(20);             //  {10->20->NULL}
    ll.display();
    ll.insertAtTail(30);             
    ll.display();
    ll.insertAtTail(40);             
    ll.display();

    ll.insertAthead(50);
    ll.display();
    ll.insertAthead(24);
    ll.display();
    ll.insertAtIdx(4, 80);
    ll.deleteAthead();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIdx(2);
    ll.display();
    // cout<<ll.getAtIdx(4)<<endl;
    return 0;
}