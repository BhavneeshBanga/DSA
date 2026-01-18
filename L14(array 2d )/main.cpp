//Decleration and initialization
#include<iostream> 
#include<algorithm>
using namespace std;
int main(){
    int rows;
    cout<<"Enter number of rows\n>>";
    cin>>rows;
    int columns;
    cout<<"Enter number of columns\n>>";
    cin>>columns;
    int arr[rows][columns];

    for(int i = 0 ; i<rows ; i++){
        for(int j = 0 ; j<columns ; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0 ; i<rows ; i++){
        for(int j = 0 ; j<columns ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}