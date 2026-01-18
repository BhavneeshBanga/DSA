#include<iostream>
using namespace std;
int main(){
    
    // for(int i = 0 ; i<=100 ; i=i+1){
    //     if(i%2==0){
    //         cout<<">> "<<i<<endl;
    //     }
    // }



    // this is better approc because kam steps lag rhe hai
    for(int i = 2 ; i<=100; i+=2){
        cout<<">> "<<i<<endl;
    }
    return 0;
}