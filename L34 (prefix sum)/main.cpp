#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 9, 4, 5, 8, 17, 13, 5, 11, 13, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 1 ; i<n ;i++){
        arr[i] += arr[i-1];
    }
    bool flag = false;
    for(int i = 0 ; i<n ; i++){
        if(2*arr[i]==arr[n-1]){
            flag = true;
            break;
        }
    }
    if(flag) cout<<"Yes";
    else cout<<"no";
    return 0;
}