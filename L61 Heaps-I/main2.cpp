// #include <iostream>
// #include <algorithm>
// #include <queue>
// using namespace std;

// int main() {
//     int k = 3;
//     priority_queue<int> h;
//     int arr[9] = {10, 20, -4, -6, 18, 8, 24, 105, 118};
//     int n = sizeof(arr)/4;
//     for(int i = 0 ; i<n ; i++){
//         h.push(arr[i]);
//         if(h.size() > k) h.pop();
//     }
//     cout<<h.top()<<endl;
// }

// sort the nearly sorted array
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int main() {
    priority_queue< int, vector<int> , greater<int> > h;
    int arr[] = {10, 9, 8, 7, 4, 70, 60, 50};
    int k = 3;
    // int arr[] = {6, 5, 3, 2, 8, 10, 9};
    // int k = 3;
    int n = sizeof(arr)/4;
    // vector<int>ans;
    int idx = 0 ;
    for(int i = 0 ;i<n ; i++){
        h.push(arr[i]);
        if(h.size() > k){
            // ans.push_back(h.top());
            arr[idx++] = h.top();
            h.pop();
        } 
    }
    for(int i = 0 ; i< k ; i++){
        // ans.push_back(h.top());
        arr[idx++] = h.top();
        h.pop();
    }
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }


    
    return 0;
}