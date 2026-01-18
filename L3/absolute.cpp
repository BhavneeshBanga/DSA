// #include<iostream>
// using namespace std; 
// int main(){
//     while(true){
//         int a;
//         cout<<"Enter the number"<<endl<<">>";
//         cin>>a;
//         if(a<0){
//             cout<<(a*(-1));
//         }
//         if(a>0) {
//             cout<<a;
//         }
//         if(a==0){
//             cout<<a;
//         }
//     cout<<endl;
// }
// }




#include<iostream>
using namespace std; 
int main(){
    while(true){
        int a;
        cout<<"Enter the number"<<endl<<">>";
        cin>>a;
        if(a<0){
            a = -a;
        }
        cout<<a;
    cout<<endl;
}
}