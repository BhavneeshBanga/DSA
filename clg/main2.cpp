#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the no of rows : " ;
    cin>>n;
    // 2n-1 Numbers 
    for(int q = 1;q<=2*n-1;q++) {
        cout<<q;
    }
    cout<<endl;
    int m = n-1;
    int nsp = 1;
    for(int i = 1;i<=m;i++) {
        // Numbers
        int a = 1;
        for(int j = 1;j<=m+1-i;j++) {
            cout<<a;
            a++;
        }
        // Spaces
        for(int k = 1;k<=nsp;k++) {
            cout<<" "; 
            a++;
        }
        nsp +=2;
        // Numbers 
        for(int r = 1;r<=m+1-i;r++) {
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}