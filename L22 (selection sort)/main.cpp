#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[] = {5, 3, 1, 2, 4, 78, 56, 90, 99, 56, 35, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    for(int i = 0 ; i<n-1 ; i++){
        int mini = INT_MAX;
        int minidx = -1;
        for(int j = i ; j<n ; j++){
            if(arr[j]<mini){
                mini = arr[j];
                minidx = j;
            } 
        }
        swap(arr[i], arr[minidx]);
    }
    cout<<endl;
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}