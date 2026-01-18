// 1, 3, 5, 7, 9.......n
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Entr the number of terms\n>>";
    cin>>n;
    int a = 1;
    for(int i = 1 ; i<=n ; i++){
        cout<<a<<endl;
        a = a*2;
    }
    return 0;
}