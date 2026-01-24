#include<iostream>
using namespace std;
int main(){
    int n1 = 1;
    cout<<"Enter power: ";
    cin>>n1;
    int n2 = 1;
    cout<<"Enter base: ";
    cin>>n2;

    bool flag = true;
    if(n1<0){
        flag = false;
        n1 = -n1;
    }

    float exp = 1;
    for(int i = 1 ; i<=n1 ; i++){
        exp *= n2;
    }
    if (flag = false){

        exp = 1/exp;
        n2 = -n2;
    }
    if(n1 == 0 && n2 == 0) cout<<"Not defined";
    cout<<n2 << " raise to the power "<< n1<<" is " <<exp;
    
}