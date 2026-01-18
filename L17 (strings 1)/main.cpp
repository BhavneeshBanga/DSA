#include<iostream>
#include<string>
using namespace std;
int main(){
    // char str[] = {'a', 'b', 'c', 'd', 'e' , 'f'};
    // for(int i = 0; i<6 ; i++){
    //     cout<<str[i]<<" ";
    // }
    // char str[5] = "abcde";      // error: initializer-string for array of chars is too long 
    // char str[5] = "abcd";          //no error
    // for(int i = 0; i<6 ; i++){
    //     cout<<str[i]<<" ";
    // }
    // cout<<"My name is Bhavneesh Banga"; //this is technicallly a string
    // char ch = '\n';
    // cout<<ch<<" ";

    // cout<<"Hello";
    // char ch = '\t';
    // cout<<ch;
    // cout<<"Hello";

    // cout<<endl;
    // char character[10] = {'a', 'b', 'c', 'd', 'e'};
    // for(int i = 0; i<5 ; i++){
    //     cout<<character[i]<<" ";
    // }
    // cout<<endl;
    // cout<<(int)character[5]<<" ";

    cout<<endl;
    char stringg[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
    for(int i = 0 ; stringg[i]!='\0' ;  i++){
        cout<<stringg[i]<<" ";
    }
    cout<<endl;
    cout<<stringg<<endl;        //pura array hi print kar deata hai
}