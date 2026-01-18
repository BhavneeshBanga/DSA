#include <iostream>
#include <stack>

using namespace std;
void DisplayRec(stack<int> &st){
    if(st.size()==0) return;
    int x = st.top();
    cout<<x<<endl;
    st.pop();
    DisplayRec(st);
    st.push(x);
}
void Display(stack<int> &st){
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    Display(st);
    cout<<x<<" ";
    st.push(x);
}
void PushAtBottomRec(stack<int>&st, int val){
    if(st.size()==0){
        st.push(val);
        return;
    } 
    int x = st.top();
    st.pop();
    PushAtBottomRec(st, val);
    // cout<<x<<endl;
    st.push(x);
}
void Reverse(stack<int>& st){
    if(st.size()==1) return;
    int x = st.top();
    st.pop();
    Reverse(st);
    PushAtBottomRec(st,x);
}


int main() {
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);


    // Display(st);
    // PushAtBottomRec(st, -10);
    // cout<<endl;
    // Display(st);


    // DisplayRec(st);


    Display(st);
    Reverse(st);
    cout<<endl;
    cout<<endl;
    Display(st);



    return 0;
}