// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> v(5);
//     for(int i = 0 ; i<5 ; i++){
//         cin>>v[i];
//     }
//     sort(v.begin(), v.end());       //O(nlogn)
//     for(int i = 0 ; i<5 ; i++){
//         cout<<v[i]<<" ";
//     }
// }


// bubble code sort
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {5, 3, 1, 2, 4, 56, 32, 76, 19, 99, 12, 13, 14};
    int n = sizeof(arr)/sizeof(arr[0]);
    // bubble sort
    for(int i = 0 ; i<n ; i++ ){
        for(int j = 0 ; j< n-i-1 ; j++){
            if(arr[j]> arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    //bubble sort optimised
    // for(int i = 0 ; i<n-1 ; i++ ){
    //     //traverse
    //     bool flag = false;
    //     for(int j = 0 ; j< n-i-1 ; j++){
    //         if(arr[j]> arr[j+1]) {
    //             swap(arr[j], arr[j+1]);
    //             flag = true;
    //         }
    //     }
    //     if(flag == true){
    //         break;
    //     }
    // }
    for(int k = 0 ; k<n; k++){
        cout<<arr[k]<<" ";
    }
}