#include<iostream>
using namespace std;
int a = 9;
void f(){
    cout<<a<<endl;
}
int main(){
    cout<<a<<endl;
    a = 8;
    cout<<a<<endl;
    f();
}