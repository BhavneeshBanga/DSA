# initialize dp vector by 1

for(int i = 0; i < n; i++) {
    for(int j = 0; j < i; j++) {

        if(nums[j] < nums[i]) {
            dp[i] = max(dp[i], dp[j] + 1);
        }
    }
}

