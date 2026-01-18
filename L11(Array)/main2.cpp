
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);             //integer arraay hai is liye ek element ka size 4 bhi de sakte the
    cout<<"The size of array is : "<<n;
}