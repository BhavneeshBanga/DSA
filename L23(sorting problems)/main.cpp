// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Hello world";
// }

// question  replace with 0 to n-1 
//new cheeze seekhne ko mili!!
// #include<iostream>
// #include<climits>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     int arr[] = {19, 12, 23, 8, 16};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i = 0 ; i<n ; i++){
//         cout<<arr[i]<<" ";
//     }
//     vector<int> v(5, 0);
//     int x = 0;
//     for(int i = 0 ; i<n  ; i++){
//         int min = INT_MAX;
//         int mindx = -1;
//         for(int j = 0 ; j<n ; j++){
//             if(v[j]==1) continue;
//             else{
//                 if(min>arr[j]){
//                     min = arr[j];
//                     mindx = j;
//                 }
//             }
//         }
//         arr[mindx] = x;
//         v[mindx] = 1;
//         x++;
//     }
//     cout<<endl;
//     for(int i = 0 ; i<n ; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// Negative marking concept
// sirf positive numbers ke liye lagta hai yeh concept
#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int arr[] = {19, 12, 23, 8, 16};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x = 0;
    for(int i = 0 ; i<n  ; i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j = 0 ; j<n ; j++){
            if(arr[j]<=0) continue;
            else{
                if(min>arr[j]){
                    min = arr[j];
                    mindx = j;
                }
            }
        }
        arr[mindx] = -x;
        x++;
    }
    for(int i = 0 ; i<n ; i++){
        arr[i] = -arr[i];
        cout<<arr[i]<<" ";
    }
}