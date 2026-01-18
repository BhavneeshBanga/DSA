// 1, 3, 5, 7, 9.......n
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Entr the number of terms\n>>";
    cin>>n;

    // for(int i = 1 ; i<=(2*n-1) ; i+=2){
    //     cout<<i<<" ";
    // }


    // extra variable
    int a = 4;
    for(int i = 1 ; i<=n ; i++){
        cout<<a<<endl;
        a = a+3;
    }
    return 0;
}