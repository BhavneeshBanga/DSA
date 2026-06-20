// https://leetcode.com/contest/biweekly-contest-185/problems/minimum-lights-to-illuminate-a-road/
//to find continuous 0s lengths
//Without TLE
class Solution {
public:
    int minLights(vector<int>& lights) {
        int n = lights.size() ;
        vector<int> diff(n + 1, 0);
    
        for(int i = 0; i < n; i++) {
            if(lights[i] > 0) {
                int l = max(0, i - lights[i]);
                int r = min(n - 1, i + lights[i]);
        
                diff[l]++;
                diff[r + 1]--;
            }
        }
        vector<int> visible(n, 0);

        int curr = 0;

        for(int i = 0; i < n; i++) {
            curr += diff[i];

            if(curr > 0)
                visible[i] = 1;
        }
        int ans = 0;
        
        for(int i = 0; i < n; ) {
        
            if(visible[i] == 1) {
                i++;
                continue;
            }
        
            int j = i;
        
            while(j < n && visible[j] == 0) {
                j++;
            }
        
            int len = j - i;   // continuous 0s length
        
            ans += (len + 2) / 3;
        
            i = j;
        }
        
        return ans; 
    }
};

//Approach with TLE
class Solution {
public:
    int minLights(vector<int>& lights) {
        int n = lights.size() ;
        vector<int>visible(n, 0);
        
        for(int i = 0; i < n; i++) {
            if(lights[i] > 0) {
                int l = max(0, i - lights[i]);
                int r = min(n - 1, i + lights[i]);
        
                for(int j = l; j <= r; j++) {
                    visible[j] = 1;
                }
            }
        }
        int ans = 0;
        
        for(int i = 0; i < n; ) {
        
            if(visible[i] == 1) {
                i++;
                continue;
            }
        
            int j = i;
        
            while(j < n && visible[j] == 0) {
                j++;
            }
        
            int len = j - i;   // continuous 0s length
        
            ans += (len + 2) / 3;
        
            i = j;
        }
        
        return ans; 
    }
};