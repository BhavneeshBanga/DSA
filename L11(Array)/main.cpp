// // Nothig is wrong is in this

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of students: ";
    cin>>n;

    int marks[n];
    cout<<"Enter marks: ";
    for(int i = 0 ; i<=n-1 ; i++){
        cin>>marks[i];
    }
    for(int i = 0 ; i<=n-1 ; i++){
        if(marks[i] < 35){
            cout<<"Roll number : "<<i<<endl;
        }
    }
}
