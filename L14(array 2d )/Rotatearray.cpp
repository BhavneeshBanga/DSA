#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for(int i = 0 ; i<n ; i++){
        for(int j = i+1 ; j<n ; j++){
            // swap i, j and j, i
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    //reveerse each row
    for(int k = 0 ; k<n ;k++){  //traversing each row
       int i = 0;
       int j = n-1;
       while(i<=j){
        int temp = matrix[k][j];
        matrix[k][j] = 

       }


    }
}
int main(){

}