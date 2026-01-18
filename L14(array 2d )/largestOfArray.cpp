// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3];
//     for(int i = 0 ; i<3 ; i++){
//         for(int j = 0 ; j<3 ; j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i = 0 ; i<3 ; i++){
//         for(int j = 0 ; j<3 ; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     int maxx = arr[0][0];
//     for(int i = 0 ; i<3 ; i++){
//         for(int j = 0 ; j<3 ; j++){
//             if(arr[i][j]> maxx) maxx = arr[i][j];
//         }
//     }
//     cout<<endl;
//     cout<<"Largest element is"<<maxx;
// }


//addition of 2 matrices
#include<iostream>
using namespace std;
int main(){
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int brr[2][3] = {{6, 7, 3}, {0, 8, 1}};
    int crr[2][3];

    for(int i = 0 ; i<2 ; i++){
        for(int j = 0 ; j<3 ; j++){
            crr[i][j] = arr[i][j] + brr[i][j];
        }
    }
    for(int i = 0 ; i<2 ; i++){
        for(int j = 0 ; j<3 ; j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
}