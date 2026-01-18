// #include<iostream>
// using namespace std;
// int main(){
//     int m;
//     cout<<"Enter number of rows/columns\n>>";
//     cin>>m;
//     int arr[m][m];
//     for(int i = 0; i<m ; i++){
//         for(int j = 0; j<m ; j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;
//     for(int i = 0; i<m ; i++){
//         for(int j = 0; j<m ; j++){
//                 cout<<arr[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
//     cout<<endl;
//     // transpose in the same matrix
//     for(int i = 0; i<m ; i++){
//         for(int j = i+1; j<m; j++){
//             if(i!=j){
//                 int temp = arr[i][j];
//                 arr[i][j] = arr[j][i];
//                 arr[j][i] = temp;
//             }
//         }
//     }
//     for(int i = 0; i<m ; i++){
//         for(int j = 0; j<m ; j++){
//                 cout<<arr[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
// }

#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int i =0;
    int hi=n-1;
    bool run = true;
    while(run){
        int temp = arr[i];
        arr[i] = arr[hi];
        arr[hi] = temp;
        i++;
        hi--;
        if(i>hi) run = false;
    }    
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

// left rotate karne walal method
// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n = matrix.size();
        

//         for(int i = 0 ; i<n ; i++){
//             for(int j = i+1 ; j<n ; j++){
//                 if(i!=j){
//                     int temp = matrix[i][j];
//                     matrix[i][j] = matrix[j][i];
//                     matrix[j][i] = temp;
//                 }
//             }
//         }
//         //transpose compoleted 
//         //now its the time to reverse each row
//         for(int j = 0; j<n ; j++){
//             int i =0;
//             int hi=n-1;
//             bool run = true;
//             while(run){
//                 int temp = matrix[i][j];
//                 matrix[i][j] = matrix[hi][j];
//                 matrix[hi][j] = temp;
//                 i++;
//                 hi--;
//                 if(i>hi) run = false;
//             }
//         }
//     }
// };