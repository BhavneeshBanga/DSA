// #include<iostream>
// #include<vector>
// using namespace std; 
// int main(){
//     vector<int>v1;
//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(3);
//     vector<int>v2;
//     v2.push_back(4);
//     v2.push_back(5);
//     vector<int>v3;
//     v3.push_back(6);
//     v3.push_back(7);
//     v3.push_back(8);
//     v3.push_back(9);
//     v3.push_back(10);
//     vector<vector<int> > v;
//     v.push_back(v1);
//     v.push_back(v2);
//     v.push_back(v3);
//     cout<<v[0][7];  //in valid  gaarbage value de rha hai
// }

//Passing array into functions           //error dega
// #include<iostream>
// #include<vector>
// using namespace std;
// void change(int a[]){
//     a[0] = 10;
// }
// void change2D(int arr[3][3]){     //values dono dena pdega vrna error dega
//     arr[0][0] = 100;
// }
// int main(){
//     int a[3] = {1, 2, 3};
//     cout<<a[0]<<endl; 
//     change(a);
//     cout<<a[0]<<endl; 
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     cout<<arr[0][0]<<endl; 
//     change2D(arr);
//     cout<<arr[0][0]<<endl; 
// }

// change2Dvector
// #include<iostream>
// #include<vector>
// using namespace std; 
// void change2dvector(vector<vector<int> > &v){
//     v[0][1] = 100;
// }
// void length(vector<vector<int> > &v){
//     cout<<v.size();
// }
// int main(){
//     vector<int>v1;
//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(3);
//     //
//     vector<int>v2;
//     v2.push_back(4);
//     v2.push_back(5);
//     //
//     vector<int>v3;
//     v3.push_back(6);
//     v3.push_back(7);
//     v3.push_back(8);
//     v3.push_back(9);
//     v3.push_back(10);
//     //
//     vector<vector<int> > v;
//     v.push_back(v1);
//     v.push_back(v2);
//     v.push_back(v3);
//     // cout<<v[0][1]<<endl;
//     // change2dvector(v);
//     // cout<<v[0][1]<<endl;
//     length(v);
// }

// 2d vector to functions
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     // vector<int> v(5, 2);
//     // cout<<v[0]<<" ";
//     // cout<<v[1]<<" ";
//     // cout<<v[2]<<" ";
//     // cout<<v[3]<<" ";
//     // cout<<v[4]<<" ";
//     // vector<vector<int>> v(3, vector<int>(4));   //iska matalb yeh hai ki 3 rows aur 4 columns ka vector bn gya hai
//     vector<vector<int>> v(3, vector<int>(4, 2));    //2  2  2  2
    
//     for(int i = 0 ; i<3 ; i++){
//         for(int j = 0 ; j<4 ; j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     cout<<v.size()<<endl;
//     cout<<v[0].size()<<" ";
// }


// Binary to decimal
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 1, 0, 0, 1, 0, 1};
    int sum = 0; 
    int x = 1;
    for(int i = 6 ; i>= 0 ; i--){
        sum += arr[i]*x;
        x = x*2;
    }
    cout<<sum<<endl;
}

//  
