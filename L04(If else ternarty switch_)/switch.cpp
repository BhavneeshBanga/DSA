// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter number: ";
//     cin>>x;
//     switch(x){
//         case 404:
//         cout<<"error";
//         break;
//         case 200:
//         cout<<"server error";
//         break;
//     }
// }

// input numbers ans print no of days;)
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter number: ";
//     cin>>x;
//     switch(x){
//     case 1:
//         cout<<"31";
//         break;
//     case 2:
//         cout<<"28";
//         break;
//     case 3:
//         cout<<"31";
//         break;
//     case 4:
//         cout<<"30";
//         break;
//     case 5:
//         cout<<"31";
//         break;
//     case 6:
//         cout<<"30";
//         break;
//     case 7:
//         cout<<"31";
//         break;
//     case 8:
//         cout<<"30";
//         break;   
//     }
// }



// 
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter number: ";
    cin>>x;
    switch((x<=7 && x%2!=0) || (x>=8 && x%2==0)){
        case 1:
        cout<<"31";
    }
    switch(x==4 || x==6 || x==9 || x==11){
        case 1: 
        cout<<"30";
    }
    switch(x){
        case 2:
        cout<<"28";
    }
}