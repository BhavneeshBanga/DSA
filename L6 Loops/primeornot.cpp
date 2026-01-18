#include<iostream>
using namespace std;
int main(){
    while(true){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    bool flag = true;

    for(int i = 2 ; i<=(n/2) ; i++){
        if(n%i==0){
            flag = false;
            break;
        } 
    }

    if(n==1) cout<<"1 is neither prime nor composite";
    else if(flag==true) cout<<n<<" is Prime";
    else cout<<n<<" is Composite";
    cout<<endl;
    }
}