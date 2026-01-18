
// sum of digits of a given number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Entr the number\n>>";
    cin>>n;
    int sum = 0;
    while(n>0){
        int LastDigit = n%10;
        sum += LastDigit;
        n = n/10;
    }
    cout<<sum;
}