//                  HIGH TIME COMPLEXITY
//                ************************
#include<iostream>
using namespace std;
int fact(int n){
    int fact = 1;
    for(int i = 1 ; i<=n ; i++ ){
        fact*=i;
    }
    return fact;
}
int ncr(int n, int r){
    int ncrr = fact(n)/(fact(r)*fact(n-r));
    return ncrr;
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i = 0; i<=n ; i++){
        for(int j = 0 ; j<=i ; j++){
            cout<<ncr(i, j)<<" ";
        }
        cout<<endl;
    }
}