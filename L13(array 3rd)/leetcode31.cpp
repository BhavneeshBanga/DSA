//leetcode 31 Next permutaion
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nextPermutation(vector<int>& nums) {
    int pivot_idx = -1;
    int n = nums.size();
    //1} finding pivot index
    for(int i = n-2 ; i>=0 ; i--){
        if(nums[i+1] > nums[i]){
            pivot_idx = i;
            break;
        }
    } 
    if(pivot_idx == -1){
        //reverse the whole array
        reverse(nums.begin(), nums.end());
        return;
    }
    //2} sorting after pivot
    reverse(nums.begin() + pivot_idx + 1, nums.end());
    //finding the jsut greater element than idx
    int j = -1;
    for(int i = pivot_idx + 1 ; i<n ; i++){
        if(nums[i] > nums[pivot_idx]){
            j = i;
            break;
        }
    }
    //3} swappping idx idx+1
    int temp = nums[pivot_idx];
    nums[pivot_idx] = nums[j];
    nums[j] = temp;
    return;
}
int main(){
    // 1243  1342  1324  
    // 15432  12345 21345
    // 19283 19238 19328
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(2);
    // v.push_back(3);
    for(int i = 0 ; i<v.size() ; i++){
        cout<<v[i];
        if(i==v.size()-1){
            cout<<endl;
        }
        else cout<<",";
    }
    //
    nextPermutation(v);
    //
    for(int i = 0 ; i<v.size() ; i++){
        cout<<v[i];
        if(i==v.size()-1){
            cout<<endl;
        }
        else cout<<",";
    }
}