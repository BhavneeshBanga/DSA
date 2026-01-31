#include<iostream>
using namespace std;
int StairCase(int n){
    if(n==2) return 2;
    if(n==1) return 1;
    return StairCase(n-1) + StairCase(n-2);
}
int main(){
    cout<<StairCase(6)<<endl;
}