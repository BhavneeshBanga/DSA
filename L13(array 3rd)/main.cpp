//Sort the array of 0's and 1's 
//Method 1 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void sort01(vector<int> &v){
//     int n = v.size();
//     int noZ = 0;
//     int noO = 0;
//     for(int i = 0 ; i<n ; i++){
//        if(v[i]==0) noZ++;
//        else noO++;
//     }
//     //filling elements
//     for(int i = 0 ; i<n ; i++){
//         if(i<noZ ) v[i] = 0;
//         else v[i] = 1;
//     }
// }
// int main(){
//     vector<int> v;
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     for(int i = 0 ; i<v.size() ; i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     sort01(v);
//     for(int i = 0 ; i<v.size() ; i++){
//         cout<<v[i]<<" ";
//     }
// }

// Method 2
// **TWO POINTERS**
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> v;
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     int i = 0;
//     int j = v.size() - 1;
//     while(i<j){
//         if(v[j]==1) j--;
//         else if(v[i]==0) i++;
//         else if(v[i]==1 && v[j]==0){
//             v[i] = 0;
//             v[j] = 1;
//             i++;
//             j--;
//         }
//     }
// for(int i = 0; i<v.size() ; i++){
//     cout<<v[i]<<" ";
//     }
// }

// Move all negative number to end and positive to beg with constant extra spaces
// 1  -2  3  -4  -5  6  8 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(-2);
    v.push_back(3);
    v.push_back(-4);
    v.push_back(-5);
    v.push_back(6);
    v.push_back(8);
    int i = 0;
    int j = v.size() - 1;
    while(i<j){
        if(v[j]>0) j--;
        else if(v[i]<0) i++;
        else if(v[i]<0  && v[j]>0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
    for(int i = 0; i<v.size() ; i++){
    cout<<v[i]<<" ";
    }
}