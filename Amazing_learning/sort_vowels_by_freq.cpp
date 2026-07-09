
//Question - https://leetcode.com/problems/sort-vowels-by-frequency/
//Solution - 
//custom comparator

#define pp pair<int, int>

class Solution {
public:
    bool isvowel(char c){
        if(c=='a' || c=='e' || c == 'i' || c=='o' || c=='u') return true;
        return false;
    }
    string sortVowels(string s) {
        vector<char>vow;
        int n = s.length();

        unordered_map<char,pp>mp;

        for(int i=0;i<n;i++){
            if(isvowel(s[i])){
                mp[s[i]].first++;          // frequency
                // first occurrence for first time
                if(mp[s[i]].first==1)
                    mp[s[i]].second = i;
            }
        }
        vector<pair<char,pair<int,int>>> v;

        for(auto x : mp){
            v.push_back(x);
        }

        sort(v.begin(), v.end(), [](auto &a, auto &b){

            if(a.second.first != b.second.first)
                return a.second.first > b.second.first;

            return a.second.second < b.second.second;

        });
        vector<char>ans;
        for(int i = 0 ; i<v.size() ; i++){
            auto curr = v[i];
            for(int j = 0 ; j<v[i].second.first ; j++) {
                ans.push_back(v[i].first);
            }
        }

        int idx  = 0;
        for(int i = 0 ; i<n ; i++) {
            if(isvowel(s[i])){
                s[i] = ans[idx];
                idx++;
            }
        }
        return s;
    }
};