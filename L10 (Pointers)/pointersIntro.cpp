// #include<iostream>
// using namespace std;
// int main(){
//     // int x = 8;
//     // int* p = &x;
//     float x = 7;
//     float* p = &x;
//     cout<<&x<<endl;
//     cout<<p<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x = 9;
//     int* p = &x;
//     cout<<p<<endl;
//     x = 90;
//     cout<<*p;
// }


#include<iostream>
using namespace std;
int main(){
    int x = 9;
    int* p = &x;
    cout<<x<<endl;
    *p = 90;
    cout<<x;
    
}