#include<iostream>
using namespace std;
void display(int* a, int size){
    for(int i = 0 ; i<=size-1 ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}

void change(int b[], int size){
    b[0] = 100;
    return;
}

int main(){
    //accessing the elements of array in another function
    // update pass by value pass by reference
    int arr[5] = {1, 2, 3, 4, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    display(arr, size);
    change(arr, size);
    display(arr, size);
}