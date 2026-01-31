// Traversing and displaying the array
#include<iostream>
using namespace std;
void display(int arr[], int n , int idx){
    if(idx==n) return;
    cout<<idx<<" ";
    display(arr, n, idx+1);
}
int main(){
    int arr[] = {1, 5, 2, 4, 3, 7, 9, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr, n , 0);
}