#include<iostream>
using namespace std;
int main(){
    int arr[] = {5, 3, 1, 2, 4, 56};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n ; i++ ){
        for(int j = 0 ; j< n-i-1 ; j++){
            if(arr[j]> arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int k = 0 ; k<n; k++){
        cout<<arr[k]<<" ";
    }
}