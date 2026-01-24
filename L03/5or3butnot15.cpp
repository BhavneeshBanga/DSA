#include<iostream>
using namespace std; 
int main(){
    while(true){
        int a;
        cout<<"Enter the 1st"<<endl<<">>";
        cin>>a;
        cout<<a<<endl;
        if((a%5==0 || a%3==0) && a%15!=0){
            cout<<"It is the number which si div by 3 and 5 both but not by 15";

        }
        else{
            cout<<endl<<"Not matched";
        }
     
    }
    cout<<endl;
}