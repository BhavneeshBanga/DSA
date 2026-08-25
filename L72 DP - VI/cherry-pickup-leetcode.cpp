//  https://leetcode.com/problems/cherry-pickup/submissions/2118112742/

///* Bouncer *///

#define ll long long int
#define neg INT_MIN
int m, n;
vector<vector<int>>mat;
ll dp[105][105][105];

class Solution {
public:
    ll f(ll i, ll j, ll x, ll y) {
        if( i > n or j> m or x > n or y > m or mat[i][j] == -1 or mat[x][y] == -1) return neg;

        if( i == n && j == m) {
            return mat[i][j] == 1;
        }

        if(dp[i][j][x] != -1) return dp[i][j][x];

        ll result = neg;

        result = max(result, f(i+1, j, x+1, y));
        result = max(result, f(i, j+1, x+1, y));
        result = max(result, f(i+1, j, x, y+1));
        result = max(result, f(i, j+1, x, y+1));


        if(result == neg) return dp[i][j][x] = neg;
        result += (mat[i][j] == 1);
        result += (mat[x][y] == 1);

        // remove repitition
        if(i == x and j == y and mat[i][j] == 1) result--;
        return dp[i][j][x] = result;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        mat.resize(105, vector<int>(105, 0));
        n = grid.size();
        m = grid.size();
        memset(dp, -1, sizeof dp);
        for(int i = 0 ; i< n ; i++) {
            for(int j =0 ; j< m ; j++) {
                mat[i+1][j+1] = grid[i][j];
            }
        }
        ll ans = f(1,1,1,1);
        return ans == neg ? 0 : ans;
    }
};