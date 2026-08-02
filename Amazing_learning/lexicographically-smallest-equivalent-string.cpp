// https://leetcode.com/problems/lexicographically-smallest-equivalent-string

class Solution {
public:
    int find(vector<int>&par, int a) {
        return par[a] = (par[a]==a) ? a : find(par, par[a]);
    }
    void Union(vector<int>&par, char u, char v) {
        int a = u - 'a';
        int b = v - 'a';

        a = find(par,a);
        b = find(par,b);

        if(b < a){
            par[a] = b;
        } else {
            par[b] = a;
        }
    }
    string smallestEquivalentString(string s1, string s2, string b) {
        int n = s1.length();

        vector<int>par(26);
        vector<int>rank(n+1, 0);
        for(int i = 0 ; i<26 ; i++){
            par[i] = i;
        }

        for(int i = 0 ; i<n ; i++) {
            Union(par, s1[i], s2[i]);
        }
        for(int i = 0 ; i<b.length() ; i++) {

            b[i] = find(par, b[i] - 'a') + 'a';
        }
        return b; 
    }
};