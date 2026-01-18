#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {1, 2, 4, 5, 9, 15, 18, 21};
    int target = 1;
    int n = v.size();
    for(int i = 0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    bool run = true;
    int lo = 0;
    int hi = n;
    bool flag = false;
    while(run){
        int mid = (lo + hi) / 2;
        if(v[mid] == target){
            flag = true;
            break;
        }
        if(v[mid]< target) lo = mid+1;
        if(v[mid]> target) hi = mid-1;  
        if(lo >= hi) break; 
    }
    if(flag == false) cout<<"Not present";
    else cout<<"present";
}

// Lower bound of a number by simple method 
// #include<iostream> 
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v = {1, 2, 4, 5, 9, 15, 18, 21, 24};
//     int target = 22;
//     for( int i = 0 ; i< v.size() ; i++){
//         if(v[i]>target){
//             cout<<"Lower bound is "<<v[i-1];
//             break;
//         }
//     }
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[] = {1, 2, 4, 5, 9, 15, 18, 21, 24};
//     int n = 9;
//     int target = 20;
//     for( int i = 0 ; i<9 ; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int lo = 0;
//     int hi = 9-1;
//     bool flag = false;
//     while(lo<=hi){
//         int mid = lo + (hi - lo)/2;
//         if(arr[mid]==target){
//             cout<<arr[mid-1];       //mid + 1 for upper bound
//             flag = true;
//             break;
//         } 
//         else if(arr[mid] > target) hi = mid - 1;
//         else lo = mid + 1; 
//     }
//     cout<<"Lower bound is "<<arr[hi]<<endl;
//     cout<<"Upper bound is "<<arr[lo];
// }


// 

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[] = {1, 2, 2, 3, 3, 3, 3, 3, 4, 4, 5, 8, 9};
//     int n = 13;
//     int target = 3;
//     for(int i = 0 ; i<n ; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int lo = 0;
//     int hi = n-1;
//     bool flag = false;
//     while(lo<=hi){
//         int mid = lo + (hi-lo)/2;
//         if(arr[mid]==target){
//             if(arr[mid-1]!=target){
//                 flag = true;
//                 cout<<arr[mid-1];
//                 break;
//             }
//             else {
//                 hi = mid - 1;
//             }
//         }
//         else if(arr[mid]<target){
//             lo = mid + 1;
//         }
//         else {
//             hi = mid - 1;
//         }
//     }
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[] = {0, 1, 2, 3, 4, 5, 7, 8, 9};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int start = 0;
//     for(int i = 0 ; i<n ; i++){
//         // if(arr[i]!=start){
//         //     cout<<"Dikkat hai "<<start<<" wala elememnt present nahi hai!!";
//         //     break;
//         // }
//         // start++;
//         if(i!=arr[i]){
//             cout<<i<<" is not present!!";
//             break;
//         }
//     }  
// }

// find first occurence of non negative element 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {0, 1, 2, 3, 4, 5, 6,7, 8, 9, 10, 11, 12, 13, 14, 15, 17};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int lo = 0;
//     int hi = n;
//     int ans = -1;
//     while(lo<=hi){
//         int mid = lo + (hi-lo)/2;
//         if(arr[mid]==mid){
//             lo = mid+1;
//         }
//         else{
//             ans = mid;
//             hi = mid - 1;
//         }
//     }
//     cout<<ans;
// }


// square root of a number.
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 36;
//     int lo = 0;
//     int hi = 36;
//     while(lo<=hi){
//         int mid = lo + (hi - lo)/2;
//         if((mid*mid)==n){
//             cout<<"Yahi hai aapka square root of "<<hi;
//             break;
//         }
//         else if((mid*mid)>n){
//             hi = mid-1;
//         }
//         else{
//             lo = mid+1;
//         }      
// }
// }
