#include<iostream>
using namespace std;
int main(){
    // int x = 7;
    // int* ptr = &x;
    // cout<<ptr<<endl;        //0x61ff08
    // ptr = ptr + 1;
    // cout<<ptr<<endl;        //0x61ff0c


    // bool flag = true;
    // bool* ptr = &flag;          
    // cout<<ptr<<endl;            //0x61ff0b
    // ptr = ptr + 1;
    // cout<<ptr<<endl;            //0x61ff0c


    // int x = 4;
    // int* ptr = &x;
    // cout<<*ptr<<endl;        //4
    // ptr = ptr + 1;
    // cout<<*ptr<<endl;       //6422284


    int x = 4;
    int* ptr = &x;
    cout<<*ptr<<endl;      //4
    (*ptr)++;               //Brackets lgana ek sahi advise hai bina brackets ke kroge togh warning aayegi
    cout<<*ptr<<endl;  //5
}
