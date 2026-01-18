// #include<iostream>
// #include<vector>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s = "AZYZBZDXJK";
//     string str;
//     for(int i = 0 ; i<s.length() ; i++){
//         if(s[i]>='X'){
//             str.push_back(s[i]);
//         }
//     }
//     sort(str.begin(), str.end());
//     cout<<str;
// }

// Push zeros to the end while maintaining ther relative order of other elements
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {1, 3, 0 , 5, 6, 0, 7, 8, 0, 2, 0, 4, 0, 5 , 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    for(int i = 0 ; i<n-1 ; i++){
        for(int j = 0 ; j<n-i-1 ; j++){
            if(arr[j]==0 && arr[j+1]!=0){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    cout<<endl;
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}