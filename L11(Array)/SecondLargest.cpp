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
    int maxx = INT_MIN;
    for(int i = 1 ; i<=n-1 ; i++){
        if(maxx<arr[i]){
            maxx = arr[i];
        }
    }
    int maxx2 = INT_MIN;
    for(int i = 1 ; i<=n-1 ; i++){
        if((arr[i] != maxx) && maxx2 < arr[i]){
            maxx2 = arr[i];
            }
        }
        cout<<"Maxx elememnt is : "<<maxx<<endl;
        cout<<"2nd Maxx elememnt is : "<<maxx2;
}