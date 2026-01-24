#include<iostream>
using namespace std; 
int main(){
    while(true){
        int a;
        cout<<"Enter a character: ";
        cin>>a;
        int b;
        cout<<"Enter a character: ";
        cin>>b;
        int c;
        cout<<"Enter a character: ";
        cin>>c;
        if(a+b>c && b+c>a && c+a>b){
            cout<<"Yes thsi can ve the sideas of triangle";
        }
        else{
            cout<<"Triangle made by these points is not possinb;e";
        }
        
    cout<<endl;
    }
}