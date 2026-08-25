// https://leetcode.com/problems/house-robber/

//Recursive
class Solution {
public:
    int f(vector<int>arr, int i, vector<int>&dp) {
        if(i == arr.size() - 1) return arr[i];
        if(i == arr.size() -2)  return max(arr[i], arr[i+1]);
        if(dp[i] != -1) return dp[i];
        return dp[i] =  max(arr[i] + f(arr, i+2, dp), 0+f(arr, i+1, dp));
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size() , -1);
        return f(nums, 0, dp);   
    }
};


//Iterative
class Solution {
public:
    int f( vector<int>&nums, vector<int>&dp) {
        if(nums.size() == 1 ) return nums[0];
        int n = nums.size();
        dp[n-1] = nums[n-1];
        dp[n-2] = max(nums[n-2], nums[n-1]);
        for(int i = n-3 ; i>= 0 ; i--) {
            dp[i] = max(dp[i+1], nums[i] + dp[i+2]);   // doubt -> nums[i] + dp[i+2] ?? kaise ??
        }
        return dp[0];
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size() , -1);
        return f(nums, dp);   
    }
};