//return k wala
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {5, 2, 10};
    int i  = 1;
    int k = -1;
    int k_min = INT_MAX;
    int k_max = INT_MIN;
    int n = sizeof(arr)/sizeof(arr[0]);
    while(i<n){
        if(arr[i-1]>= arr[i]){
            k_min>=(arr[i] + arr[i-1])/2;
        }
        else{
            k_max<(arr[i] + arr[i-1])/2;
        }
    }
}