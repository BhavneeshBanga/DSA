// combinational sum.
// https://leetcode.com/problems/combination-sum/description/
#include <iostream>
#include <vector>
using namespace std;
void combination(int arr[] ,vector<int> v, int n, int target, int idx){
    if(target == 0) {
        for( int i = 0 ; i<v.size() ; i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(target < 0 ) return;
    for(int i = idx ; i<n ; i++){
        v.push_back(arr[i]);
        combination(arr,v,n, target-arr[i], i);
        v.pop_back();
    }
}
int main() {
    int arr[] = {2, 3, 5};
    vector<int> v;
    int n = sizeof(arr)/sizeof(arr[0]);
    combination(arr, v, n,8,  0);
}