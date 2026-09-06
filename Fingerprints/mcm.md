dp[i][j] = 
    min(
        dp[i][j]
        + dp[k][j]
        + v[i]*v[j]*v[k]
        );


        