#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements: ";
    for(int i = 0 ; i<=n-1 ; i++){
        cin>>arr[i];
    }
    cout<<endl;

    // int maxx =arr[0];
    // for(int i = 1 ; i<=n-1 ; i++){
    //     if(maxx<arr[i]){
    //         maxx = arr[i];
    //     }
    // }
    // cout<<"Maxx elememnt is : "<<maxx;
    int maxx = INT_MIN;
    for(int i = 0 ; i<=n-1 ; i++){
        if(maxx<arr[i]){
            maxx = arr[i];
        }
    }
    cout<<"Maxx elememnt is : "<<maxx;
}