// maximum in array
#include<iostream>
#include<climits>
using namespace std;
int MaxInArray2(int arr[], int n, int idx){
    if(n==idx) return INT_MIN;
    return max(arr[idx], MaxInArray2(arr, n, idx+1));
}
int main(){
    int arr[] = {1, 5, 200, 404, 3, 7, 9, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    // MaxInArray(arr,n,0);
    cout<<MaxInArray2(arr,n,0);
}
