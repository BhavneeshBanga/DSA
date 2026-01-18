#include<iostream>
using namespace std;
int main(){
    // int x= 4;
    // int y = 5;
    // int* p1 = &x;
    // int* p2 = &y;
    // cout<<"Sum is "<<*p1+*p2;

    int x, y;
    int* p1 = &x;
    int* p2 = &y;
    cout<<"Enter first number: ";
    cin>>*p1;


    cout<<"Enter second number: ";
    cin>>*p2;

    cout<<*p1 + *p2;
}