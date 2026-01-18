#include<iostream>
using namespace std;


void NumberSpiral(int n){
#include<iostream>
using namespace std;
    

    for(int i = 1; i<=2*n-1 ; i++){
        for(int j = 1; j<=2*n-1 ; j++){
            int a = i;
            int b = j;
            if(a>n) a = (2*n) - i;            
            if(b>n) b = (2*n) - j;  
            int z = min(a, b);        
            cout<<(n-z+1)<<" "; 
        }
        cout<<endl;
    }
}


int main(){
    NumberSpiral(3);
    NumberSpiral(4);
    NumberSpiral(5);
}