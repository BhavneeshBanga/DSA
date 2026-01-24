#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter first number: ";
    cin>>a;
    int b;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Numbers Before swapping "<<a<<" "<<b;
    cout<<endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"Numbers after swapping "<<a<<" "<<b;
}