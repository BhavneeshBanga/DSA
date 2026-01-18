// Tower of hanoi
// #include<iostream>
// using namespace std;
// void hanoi(int n, char s,char h,char d){
//     if(n==0) return;
//     hanoi(n-1, s, d, h);
//     cout<<s<<" -> "<<d<<endl;
//     hanoi(n-1, h, s, d);
// }
// int main(){
//     int n = 4;
//     hanoi(n, 'A', 'B', 'C');
// }

// Traversing and displaying the array
// #include<iostream>
// using namespace std;
// void display(int arr[], int n , int idx){
//     if(idx==n) return;
//     cout<<idx<<" ";
//     display(arr, n, idx+1);
// }
// int main(){
//     int arr[] = {1, 5, 2, 4, 3, 7, 9, 0};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     display(arr, n , 0);
// }

// Maximum value in array
// #include<iostream>
// #include<climits>
// using namespace std;
// void MaxValueInArray(int arr[] ,int n, int idx, int max){
//     if(idx == n){
//         cout<<max;
//         return;
//     }
//     if(max<arr[idx]) max = arr[idx];
//     MaxValueInArray(arr, n, idx+1 , max);
// }
// int main(){
//     int arr[] = {1, 5, 2, 44, 3, 7, 9, 0};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     MaxValueInArray(arr,n,0, INT_MIN);
// }

// maximum in array
// #include<iostream>
// #include<climits>
// using namespace std;
// int MaxInArray2(int arr[], int n, int idx){
//     if(n==idx) return INT_MIN;
//     return max(arr[idx], MaxInArray2(arr, n, idx+1));
// }
// int main(){
//     int arr[] = {1, 5, 200, 404, 3, 7, 9, 0};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     // MaxInArray(arr,n,0);
//     cout<<MaxInArray2(arr,n,0);
// }

// skip the char
// #include<iostream>
// using namespace std;
// void removeChar(string ans, string original){
//     if(original.length() == 0){
//         cout<<ans;
//         return;
//     }
//     char ch = original[0];
//     if(ch=='a') removeChar(ans, original.substr(1));
//     else removeChar(ans+ch, original.substr(1));
// }
// int main(){
//     string str = "aabraa ka daabra";
//     removeChar("", str);
// }

// skip the char
// #include<iostream>
// using namespace std;
// void removeChar(string ans, string original, int idx){
//     if(original.length() == idx){
//         cout<<ans;
//         return;
//     }
//     char ch = original[idx];
//     if(ch=='a') removeChar(ans, original, idx+1);
//     else removeChar(ans+ch, original, idx+1);
// }
// int main(){
//     string str = "aabraa ka daabra";
//     removeChar("", str, 0);
// }

// print subset of string
// #include<iostream>
// using namespace std;
// void printSubset(string ans, string original){
//     if(original==""){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = original[0];
//     printSubset(ans+ch, original.substr(1));
//     printSubset(ans, original.substr(1));
// }
// int main(){
//     string str = "abc";
//     printSubset("", str);
// }

// store
// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// void printSubset(string ans, string original, vector<string> &v){
//     if(original==""){
//         v.push_back(ans);
//         return;
//     }
//     char ch = original[0];
//     printSubset(ans+ch, original.substr(1),v );
//     printSubset(ans, original.substr(1), v);
// }
// int main(){
//     string str = "abc";
//     vector<string> v;
//     printSubset("", str, v);
//     for (string ele : v){
//         cout<<ele<<endl;
//     }
// }

// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// void printSubset(int arr[] , int n , int idx ,
//     vector<int> ans){
//     if(idx == n ){
//         for(int i = 0 ; i< ans.size() ; i++){
//             cout<<ans[i]<<" ";
//         }
//         cout<<endl;
//         return;
//     }
//     printSubset(arr, n, idx+1 , ans);
//     ans.push_back(arr[idx]);
//     printSubset(arr, n, idx+1 , ans);
// }
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     vector<int> v;
//     printSubset(arr, n, 0, v);
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void storeSubset(string ans, string original, 
// vector<string> &v, bool flag){
//     if(original==""){
//         v.push_back(ans);
//         return;
//     }
//     char ch = original[0];
//     if(original.length() == 1){
//         if(flag==true) storeSubset(ans+ch , original.substr(1), v, true);
//         storeSubset(ans, original.substr(1), v, true);
//         return;
//     }
//     char dh = original[1];
//     if(ch==dh){     //duplicate
//         if(flag==true) storeSubset(ans+ch , original.substr(1), v, true);
//         storeSubset(ans , original.substr(1), v, false);
//     }
//     else{       //No duplicate
//         if(flag == true) storeSubset(ans+ch , original.substr(1), v, true);
//         storeSubset(ans , original.substr(1), v, true);
//     }
// }
// int main(){
//     string str = "aab";
//     vector<string> v;
//     storeSubset("", str, v, true);
//     for (int i = 0; i<v.size() ; i++){
//         cout<<v[i]<<endl;
//     }
// }

// Increasing subsequences
// #include<iostream>
// #include<vector>
// using namespace std;
// void PrintSubsequence(int arr[] , int n, int idx , vector<int>ans, int k){
//     if(idx==n){
//         if(ans.size() == k){
//             for (int i = 0 ; i<ans.size() ; i++){
//                 cout<<ans[i]<<" ";
//             }
//             cout<<endl;
//         }
//             return;
//     }
//     if(ans.size() + (n-idx)<k) return;              //for better time complixity
//     PrintSubsequence(arr, n ,idx+1 , ans, k);
//     ans.push_back(arr[idx]);
//     PrintSubsequence(arr, n ,idx+1 , ans, k);
// }
// int main(){
//     int arr[] = {1, 2, 3,4 ,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     vector<int >v;
//     int k = 3;
//     PrintSubsequence(arr, n, 0, v, k);
// }

// Permutations of a string
// #include<iostream>
// #include<vector>
// using namespace std;
// void permutations(string ans,string original){
//     //abc
//     if(original==""){
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i = 0; i<original.length() ; i++){
//         char ch = original[i];
//         string left  = original.substr(0,i);
//         string right = original.substr(i+1);
//         permutations(ans + ch , left+right);
//     }
// }
// int main(){
//     string str = "abc";
//     vector<string> v;
//     permutations("", str);
// }
