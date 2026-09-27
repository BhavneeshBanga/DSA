
for(int len = 3 ; len <= n ; len++) }
    for(int i = 0 ; i+len-1 < n ; i++) {
        int j = len + i -1 ; 
        for(int k = i+1 ; k<j ; k++) {
            dp[i][j] = 
                min(
                    dp[i][j]
                    + dp[k][j]
                    + v[i]*v[j]*v[k]
                    );
        }
    }
}