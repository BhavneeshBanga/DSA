// rev of number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Entr the number\n>>";
    cin>>n;
    int rev = 0;
    int LastDigit = 0;
    while(n>0){
        rev = rev*10;
        LastDigit = n%10;
        rev += LastDigit;
        n = n/10;
    }
    cout<<rev;
}