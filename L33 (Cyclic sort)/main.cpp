#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 1, 6, 3, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i = 0;
    while(i<n){
        int currentIdx = arr[i] - 1;
        if(i==currentIdx) i++;
        else{ 
            swap(arr[i], arr[currentIdx]);
        }
    }
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}