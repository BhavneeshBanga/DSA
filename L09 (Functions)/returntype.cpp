// #include<iostream>
// using namespace std;
// int sum(int x, int y){
//     return x+y;
// }
// int main(){
//     int a, b;
//     cin>>a;
//     cin>>b;
//     cout<<sum(a, b);
// }

#include<iostream>
#include<cmath>
using namespace std;
int mini(int x, int y){
    int a;
    if(x<y) a = x;
    else a = y;
    return a;
}
int main(){
    int a, b;
    cin>>a;
    cin>>b;
    cout<<mini(a, b)<<endl;
    cout<<sqrt(8);
}