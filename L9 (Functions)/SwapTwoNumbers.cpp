#include<iostream>
using namespace std;
int swapp(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<a<<" ";
    cout<<b;
}
int main(){
    int a;
    cout<<"Enter first number: ";
    cin>>a;
    int b;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Numbers Before swapping "<<a<<" "<<b;
    cout<<endl;
    cout<<"Numbers after swapping ";
    swapp(a, b);
}