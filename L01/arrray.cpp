#include<iostream>
using namespace std;
int main(){
    int arr[50];
    int n;
    cout<<"Enter the number"<<endl<<">>";
    cin>>n;
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }
    for(int i = 0; i< n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Squared aare";
    for(int i = 0; i< n ; i++){
        cout<<arr[i]*2<<" ";
    }
    return 0;
}