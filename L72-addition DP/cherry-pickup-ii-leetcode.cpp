//  https://leetcode.com/problems/cherry-pickup-ii/description/


// basically idea yeh hai ki ham 3d dp use kar rahe hai 

// - base case jab i last row mai pohonchega toh dekhenge ki j aur k same cell par hai same cell par hain toh cherry ki value aur agar diff cells par hain toh add karke usko return

// - har j aur k k liye 9 possibilites hain un sab ko explore kiya aur add kardiya

// - duplicate enteries ko ek baar remove kar diya



#define ll long long int
#define neg INT_MIN


class Solution {
public:
    int dp[75][75][75];
    int n;
    int m;
    vector<vector<int>>global;

    int dj[9] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
    int dk[9] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
    

    ll f(ll i, ll j, ll k) {
        if(j >m or k>m ) return 0;
        if(i == n-1){
            if(j == k) {
                return global[i][j];
            } else if (j != k) {
                return global[i][j] + global[i][k];
            }
        }

        if(dp[i][j][k] != -1) return dp[i][j][k];

        ll result = neg;

        for(int z = 0 ; z<9 ; z++) {
            if(j+dj[z] >= 0 && j+dj[z] <m && k+dk[z] >= 0 && k+dk[z] <m) {
                result = max(result, global[i][j] + global[i][k] + f(i+1, j+dj[z], k+dk[z]));
                if(j == k) {
                    result -= global[i][j];
                }
            }
        } 
        return dp[i][j][k] = result;
    }


    int cherryPickup(vector<vector<int>>& g) {
        global = g;

        n = g.size();
        m = g[0].size();

        memset(dp, -1, sizeof dp);


        ll ans = f(0, 0, m-1); // i, j, k
        return ans;
    }
};