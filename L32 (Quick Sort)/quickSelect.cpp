#include <iostream>
using namespace std;
int partition(int arr[] , int si, int ei){
    int pivoitElement = arr[(si+ei)/2];
    int count = 0;
    for(int i = si ; i<=ei ; i++){
        if(i==(si+ei)/2) continue;
        if(pivoitElement>=arr[i]) count++;
    }
    int pivotIndex = si + count;
    swap(arr[(si+ei)/2], arr[pivotIndex]);
    int i = si;
    int j = ei;
    while(i<pivotIndex && j>pivotIndex){
        if(arr[i]<=pivoitElement) i++;
        if(arr[j]>pivoitElement) j--;
        else if(arr[i]>pivoitElement && arr[j]<=pivoitElement){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}
int KthSmallest(int arr[] , int si, int ei, int k){
    // if(si>=ei) return 0;
    // 5, 1, 8, 2, 7, 6, 3, 4
    int pi = partition(arr,si, ei);

    if(pi+1 == k) return arr[pi];
    else if(pi+1>k) return KthSmallest(arr, si, pi-1, k);
    else return KthSmallest(arr, pi+1, ei, k);
}
int main() {
    int arr[] = {5, 1, 8, 2, 7, 6, 3, 4, -8};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n1 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k = 6;
    cout<<KthSmallest(arr, 0, n1, k);
}