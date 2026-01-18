#include<iostream>
using namespace std; 
int main(){
    while(true){
        char ch;
        cout<<"Enter a character: ";
        cin>>ch;
        // cout<<((int)ch);
        if((((int)ch)>=65 && (int)ch<=90)  ||  (((int)ch>=97) && ((int)ch<=122))){  
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                cout<<"this is an vowel";
            }
            else{
                cout<<"Consonent";
            }
        
    cout<<endl;
    }
}
}