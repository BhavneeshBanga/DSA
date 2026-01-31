// Maximum value in array
#include<iostream>
#include<climits>
using namespace std;
void MaxValueInArray(int arr[] ,int n, int idx, int max){
    if(idx == n){
        cout<<max;
        return;
    }
    if(max<arr[idx]) max = arr[idx];
    MaxValueInArray(arr, n, idx+1 , max);
}
int main(){
    int arr[] = {1, 50, 2, 44, 3, 7, 9, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    MaxValueInArray(arr,n,0, INT_MIN);
}