//multiplication of two matrices
//code sahi se chal rha hai thumbs up
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter rows of first matrix\n>>";
    cin>>n;
    int m;
    cout<<"Enter columns of first matrix\n>>";
    cin>>m;
    int p;
    cout<<"Enter rows of second matrix\n>>";
    cin>>p;
    int q;
    cout<<"Enter columns of second matrix\n>>";
    cin>>q;
    if(m==p){
        int a[n][m];
        cout<<"Enter elements of first matrix\n</>";
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<m ; j++){
                cin>>a[i][j];
            }
        }
        cout<<endl;
        int b[p][q];
        cout<<"Enter elements of second matrix\n</>";
        for(int i = 0 ; i<p ; i++){
            for(int j = 0 ; j<q ; j++){
                cin>>b[i][j];
            }
        }
        cout<<endl;
        int res[n][q];
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<q ; j++){
                res[i][j] = 0;
                //res[i][j] = a[i][0]*b[0][j]  +  a[i][1]*b[1][j] + 
                for(int k = 0 ; k<p ; k++){
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<q ; j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Tne matrix cannot be multiplied";
    }
}