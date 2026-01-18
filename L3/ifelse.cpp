#include<iostream>
using namespace std; 
int main(){
    while(true){
        int a;
        cout<<"Enter the number"<<endl<<">>";
        cin>>a;
        if(a%2==0){
            cout<<"Its a even number";
        }
        else cout<<"Odd";
        cout<<endl;
    }
}