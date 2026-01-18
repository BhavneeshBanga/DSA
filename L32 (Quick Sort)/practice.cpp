// quick sort 

#include <iostream>
using namespace std;

int func(int arr[] , int si, int ei){
    int pivotEle = arr[si];
    int countt = 0;
    for(int i = si+1 ; i<=ei ; i++){
        if(arr[i]<=pivotEle) countt++;
    }
    int pivotIdx = si + countt;
    swap(arr[si], arr[pivotIdx]);
    int i = si;
    int j = ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotEle) i++;
        if(arr[j]>pivotEle) j--;
        else if(arr[i]>pivotEle && arr[j]<=pivotEle){            //*****<=
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;    
}


void quicksort(int arr[] , int si, int ei){
    if(si>=ei) return;
    int pivotIdx = func(arr, si, ei);
    quicksort(arr, si, pivotIdx-1 );
    quicksort(arr,pivotIdx+1, ei);
}

int main() {
    int arr[]  = {7, 5, 3, 1, 2, 4, 6, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr, 0, n);
     for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    
}