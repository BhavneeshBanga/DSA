#include<iostream>
using namespace std;
int main(){
    // char ch1 = 'B';
    // char ch2 = 'h';
    // char ch3 = 'a';
    // char ch4 = 'v';
    // char ch5 = 'i';
    // cout<<ch1<<" "<<ch2<<" "<<ch3<<" "<<ch4<<" "<<ch5;

    // char nu = 'a';            //for a ascii value is 97
    // char nu2 = 'A';            //for A ascii value is 65
    // char nu3 = '0';            //for 0 ascii value is 48
    // cout<<(int)nu<<endl;
    // cout<<(int)nu2<<endl;
    // cout<<(int)nu3<<endl;


    // bool flag = false;
    // cout<<(int)flag;


    // char nu = 'R'; 
    // cout<<(int)nu - 64;

    float x;
    cout<<"Enter Number"<<endl<<">>";
    cin>>x;
    int y = (int)x;
    if(y<0){
        y = y-1;
    }
    float z = (float)y;
    x = x-z;
    cout<<"Fractional Part is "<<x;



    return 0;
}