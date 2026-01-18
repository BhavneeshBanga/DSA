#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

int helper(vector<int>arr){
    int nop = 0;
    int non = 0;
    int noz = 0;
    int prod_pos = 1;
    int prod_neg = 1;
    int largest_negative = INT_MIN;

    for(int i = 0; i<arr.size() ; i++){
        if(arr[i]==0) noz++;
        if(arr[i]>0){
            nop++;
            prod_pos *= arr[i];
        }
        if(arr[i]<0){
            non++;
            prod_neg *= arr[i];
            largest_negative = max(largest_negative, arr[i]);
        } 
    }
    if(non==0){
        if(noz>0){
            return 0;
        }
        else {
            auto it = min_element(arr.begin() , arr.end());
            return *it;
        }
    }
    else{
        if(non % 2 ==0){        //even negatives
            return (prod_neg*prod_pos)/largest_negative;
        }
        else{                   //odd negatives
            return prod_neg*prod_pos;

        }
    }
}

int main() {
    vector<int> arr = {11, 0, 3};
    // vector<int> arr = {11, -2, 3};
    // vector<int> arr = {-1, 3, -2, -4, 8, -3};
    cout<<helper(arr)<<endl;    
    return 0;
}