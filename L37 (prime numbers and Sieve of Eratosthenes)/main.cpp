#include <iostream>
#include <cmath>
using namespace std;
int fact = 0;

bool isprime(int n){
    if(n==1) return false;
    for(int i = 2 ; i<= sqrt(n) ; i++){
        if(n%i==0){
            fact = i;
            return false;
        } 
    }
    return true;
}
void printFactors(int n){
    for(int i= 1 ; i<sqrt(n) ; i++){
        if(n%i==0) cout<<i<<" ";
    }
    for(int i= sqrt(n) ; i>=1; i--){
        if(n%i==0) cout<<n/i<<" ";
        
    }
}
int main() {
    // cout<<isprime(49)<<endl;
    // cout<<fact;
    // printFactors(60);
    printFactors(49);
}