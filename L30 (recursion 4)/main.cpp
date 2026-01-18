//WILL WORLK ONLY IN UNIQUE ELEMENTS 

// SUB ARRAY
// #include <iostream>
// #include <vector>
// using namespace std;
// void subarray(vector<int> v, int arr[], int n , int idx){
//     if(idx == n ){
//         for ( int i = 0 ; i<v.size() ; i++){
//             cout<<v[i];
//         }
//         cout<<endl;
//         return;
//     }
//     subarray(v, arr, n , idx+1);
//     if(v.size()==0 || arr[idx-1]==v[v.size()-1]){
//         v.push_back(arr[idx]);
//         subarray(v, arr, n , idx+1);
//     }
//     // else if(arr[idx-1]==v[v.size()-1]){
//     //     v.push_back(arr[idx]);
//     //     subarray(v, arr, n , idx+1);
//     // }
//     }
// int main() {
//     int arr[] = {1, 2, 3, 4};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     vector<int> v;
//     /*  iterative method
//     for (int  i = 0; i < n; i++){
//         for(int k = i ; k<n ; k++){
//             for(int j = i ; j<=k ; j++){
//                 cout<<arr[j];
//             }
//             cout<<endl;
//         }
//     }
//     */
//    subarray(v, arr, n , 0);
// }

// Palindrome using recursion
// #include <iostream>
// using namespace std;
// bool is_palindrome(string s, int i , int j){
//     if(i>j) return true;
//     if(s[i]!=s[j]) return false;
//     else {
//         return is_palindrome(s, i+1 , j-1);
//     }
// }
// int main() {
//     string s = "racecar";
//     cout<<is_palindrome(s, 0 , s.length() - 1);
// }

//Greatesst commomn divisior 36:50
#include <iostream>
using namespace std;
// int hcf(int a, int b){
//     int reminder = max(a, b) % min(a, b);
//     if(reminder==0) return min(a, b);
//     else {
//         hcf(reminder, min(a, b));
//     }
// }
// int gcd(int a, int b){      // Time complexity is O(log(a+b))
//     if(a==0) return b;
//     else return gcd(b%a ,a);
// }
// int main() {
//     int a = 27;
//     int b = 45;
//     // cout<<hcf(a, b);
//     cout<<gcd(a, b);        //kisi bhi order mai de do numbers koi farq nahi padta
//     return 0;
// }

// Gernerate all binary strings
// #include <iostream>
// using namespace std;
// void generate(string s, int n){
//     if(s.length() == n ) {
//         cout<<s<<endl;
//         return;
//     }
//     generate(s+'0', n);
//     if(s=="" ||  s[s.length()-1]=='0' ){
//         generate(s+'1', n);
//     }    
// }
// int main() {
//     int n = 4;
//     generate("",n);
// }

// combinational sum.
// #include <iostream>
// #include <vector>
// using namespace std;
// void combination(int arr[] ,vector<int> v, int n, int target, int idx){
//     if(target == 0) {
//         for( int i = 0 ; i<v.size() ; i++){
//             cout<<v[i]<<" ";
//         }
//         cout<<endl;
//         return;
//     }
//     if(target < 0 ) return;
//     for(int i = idx ; i<n ; i++){
//         v.push_back(arr[i]);
//         combination(arr,v,n, target-arr[i], i);
//         v.pop_back();
//     }
// }
// int main() {
//     int arr[] = {2, 3, 5};
//     vector<int> v;
//     int n = sizeof(arr)/sizeof(arr[0]);
//     combination(arr, v, n,8,  0);
// }

#include <iostream>
#include <string>
using namespace std;
void Parenthesis(string s, int open, int close, int n){
    if(close == n ){
        cout<<s<<endl;
        return;
    }
    if(open<n) Parenthesis(s+"(", open+1 , close , n);
    if(close<open) Parenthesis(s+")", open , close + 1 , n);
}

int main() {
    int n = 3;
    Parenthesis("", 0, 0, n);
    return 0;
}