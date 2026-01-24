#include<iostream>
using namespace std; 
int main(){
    while(true){
        char ch;
        cout<<"Enter a character: ";
        cin>>ch;
        cout<<((int)ch);
        if((((int)ch)>=65 && (int)ch<=90)  ||  (((int)ch>=97) && ((int)ch<=122))){ //hirerchy && ki jyada hai
            cout<<endl<<"It is an alphabet";
        }
        else{
            cout<<endl<<"Not an alphabet";
        }
    cout<<endl;
    }
}

