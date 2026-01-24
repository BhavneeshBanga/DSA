#include<iostream>
using namespace std; 
int main(){
    while(true){
        int a;
        cout<<"Enter the 1st"<<endl<<">>";
        cin>>a;
        int b;
        cout<<"Enter the 2nd"<<endl<<">>";
        cin>>b;
        int c;
        cout<<"Enter the third"<<endl<<">>";
        cin>>c;
        if(a>b){
            if(a>c){
                cout<<"A is the greatest"; 
            }
            else cout<<"Cis the greateset";
        }
        else{
            if(b>c){
                cout<<"B is the greaatesst";
            }
            else{
                cout<<"C is the greatest";
            }
        }
    cout<<endl;
}
}