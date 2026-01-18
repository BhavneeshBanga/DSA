//LEETCODE 118   Pascal's triangle
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int m = 6;
//     vector<vector<int>>v;
//     for(int i = 1 ; i<=m ; i++){
//         vector<int> a(i);
//         v.push_back(a);
//     }
//     //generation
//     for(int i = 0 ; i<m ; i++){
//         for(int j = 0 ; j<=i ; j++){
//             if(j==0|| j==i) v[i][j] = 1;
//             else v[i][j] = (v[i-1][j] + v[i-1][j-1]);
//         }
//     }
//     //print
//     for(int i = 0 ; i<m ; i++){
//         for(int j = 0 ; j<=i ; j++){
//             cout<<v[i][j]<<" ";
//         }
//     cout<<endl;
//     }
// }

//more precise
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> pascal(int numRows){
    int m = numRows;
    vector<vector<int>>v;
    for(int i = 0 ; i<m ; i++){
        vector<int> a(i+1);
        v.push_back(a);
        for(int j = 0 ; j<=i ; j++){
            if(j==0|| j==i) v[i][j] = 1;
            else v[i][j] = (v[i-1][j] + v[i-1][j-1]);
        }
    }
    return v;
}
int main(){
    vector<vector<int>> v = pascal(5);
    
    for(int i = 0 ; i<v.size() ; i++){
        for(int j = 0 ; j<=i ; j++){
            cout<<v[i][j]<<" ";
        }
    cout<<endl;
    }
}