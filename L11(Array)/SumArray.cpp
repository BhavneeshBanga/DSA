// Sab thik hai code mai

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
    int sum = 0;

    for(int i = 0 ; i<=n-1 ; i++){
        sum += marks[i];
    }
    cout<<sum;
}