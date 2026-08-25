// https://leetcode.com/problems/house-robber-ii/description/


class Solution {
public:
    vector<int>dp;
    vector<int>dp2;
    vector<int>arr;

    int f1(int i) {
        if(arr.size() == 1) return arr[0];
        int n = arr.size();

        dp[n-1] = arr[n-1];
        dp[n-2] = max(arr[n-1], arr[n-2]);

        for(int i = n-3 ; i>= 1 ; i--) {
            dp[i] = max(dp[i+1], arr[i] + dp[i+2]);
        }
        return dp[1];
    }
    int f2(int i) {
        int n = arr.size();
        if(arr.size() == 1) return arr[0];
        dp2[n-2] = arr[n-2];
        dp2[n-3] = max(arr[n-2], arr[n-3]);

        for(int i = n-4 ; i>= 0 ; i--) {
            dp2[i] = max(dp2[i+1], arr[i] + dp2[i+2]);
        }
        return dp2[0];
    }

    int rob(vector<int>& nums) {
        arr = nums;
        int n = nums.size();

        if(n==0) return 1;
        else if(n==1) return nums[0];
        else if(n==2) return max(nums[0], nums[1]);

        dp.clear();
        dp.resize(n+5, -1);
        dp2.clear();
        dp2.resize(n+5, -1);

        int ans1 = f1(0);
        int ans2 = f2(1);

        return max(ans1,ans2 );
    }
};