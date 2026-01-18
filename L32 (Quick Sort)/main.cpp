#include <iostream>
#include <vector>
using namespace std;

int partition(int arr[] , int si, int ei){
    int pivotElement = arr[si];
    int countt = 0;
    for(int i = si+1; i<=ei ; i++){
        if(arr[i]<=pivotElement) countt++;
    }
    int pivotIdx = countt + si;
    swap(arr[si], arr[pivotIdx]);
    int i = si;
    int j = ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
void quicksort(int arr[], int si, int ei){
    if(si>=ei) return;
    // 5 1 8 2 7 6 3 4
    int pivotIdx = partition(arr, si, ei);
    // 4 1 3 2 5 7 8 6

    quicksort(arr, si, pivotIdx-1);
    quicksort(arr, pivotIdx+1, ei);

    
}

int main() {
    int arr[] = {5, 1, 8, 2, 7, 6, 3, 4};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n1 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    quicksort(arr, 0, n1);
    
    for(int i = 0 ; i<n1 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}