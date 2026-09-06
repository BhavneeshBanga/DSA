//   https://leetcode.com/problems/word-break/


class Solution {
public:
    int dp[305];
    int n;
    unordered_set<string>st;

    bool f(string s, int i) {
        if(i >= n) return true;

        if(dp[i] != -1) return dp[i];

        int k;
        string ans = "";
        for( k = i ; k<n ; k++) {
            ans += s[k];
            if(st.contains(ans)) {
                if(f(s, k+1)){
                    return dp[i] = 1;
                } 
            } 
        }


        return dp[i] = false;;
    }

    bool wordBreak(string s, vector<string>& w) {

        for(auto e : w) {
            st.insert(e);
        }

        n = s.length();
        
        memset(dp, -1, sizeof dp);
        return f(s, 0);
    }
};



// f(i) = i se n-1 tak ki string dictionary words se break ho sakti hai ya nahi.
// i se k tak har possible substring try karo; agar word dictionary mein hai, toh f(k+1) check karo.
// Kisi ek path se true mila → f(i)=true, warna saare paths fail hone ke baad f(i)=false.
// Same i baar-baar aata hai, isliye dp[i] mein i → end ka answer store karke reuse karo.


// i == n → successful completion → true
// dp[i] already calculated → reuse
// k = i ... n-1 → saare possible prefixes try
// s[i...k] dictionary mein hai → f(k+1) explore
// koi ek path true → immediately dp[i] = true
// koi path successful nahi → loop ke baad dp[i] = false