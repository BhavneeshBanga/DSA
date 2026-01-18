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
int npr(int n, int r){
    int nprr = fact(n)/(fact(n-r));
    return nprr;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int r;
    cout<<"Enter r: ";
    cin>>r;
    cout<<"The value of ncr is "<<ncr(n, r)<<endl;
    cout<<"The value of npr is "<<npr(n, r);
}