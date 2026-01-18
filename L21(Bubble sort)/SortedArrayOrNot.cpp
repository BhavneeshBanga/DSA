#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bool flag = true;
    for(int i = 0 ; i<n-1 ; i++){
        if(arr[i]>arr[i+1]){
            flag = false;
            break;
        } 
    }
    if(flag==false) cout<<"this array is not in asceding format";
    else cout<<"Array is sorted";
    
}