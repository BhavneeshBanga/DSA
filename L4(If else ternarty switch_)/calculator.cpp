#include<iostream>
using namespace std;
int main(){
    cout<<"Enter 1 for +: "<<endl;;
    cout<<"Enter 2 for -: "<<endl;;
    cout<<"Enter 3 for *: "<<endl;;
    cout<<"Enter 4 for /: "<<endl;;

    while(true){
    int x1;
    cout<<"Enter 1st number: ";
    cin>>x1;

    int ope;
    cout<<"Enter operator: ";
    cin>>ope;

    int x2;
    cout<<"Enter 2nd number: ";
    cin>>x2;
    
    switch(ope){
        case (1):
        cout<<x1 + x2;
        break;
        case (2):
        cout<<x1 - x2;
        break;
        case (3):
        cout<<x1 * x2;
        break;
        case (4):
        cout<<x1 / x2;
        break;
    }
    cout<<endl;

    }
}