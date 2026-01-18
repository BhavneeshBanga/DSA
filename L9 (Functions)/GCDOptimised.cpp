#include<iostream>
using namespace std;
int GCD(int a, int b){
    int hcf = 1;
    int i;
    for(i<=min(a, b) ; i>=1 ; i--){
        if(a%i==0 && b%i==0){
            hcf = i;
            break;
        }
    }
    return hcf;
}

int main(){
    int a;
    cout<<"Enter first number: ";
    cin>>a;
    int b;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<GCD(a, b);
}