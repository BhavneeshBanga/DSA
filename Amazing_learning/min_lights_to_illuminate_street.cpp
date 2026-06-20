// https://leetcode.com/contest/biweekly-contest-185/problems/minimum-lights-to-illuminate-a-road/
//to find continuous 0s lengths

Pattern 1: Range Coverage → Difference Array
Question padhte hi tum dekhte ho:

Bulb at i covers [i-v, i+v]

Matlab har bulb ek range cover kar raha hai.

Agar tumhara first thought ye tha:


Examples:

Street illumination
Flight bookings
Range increment
Car pooling
Corporate flight bookings (LeetCode famous question)




Pattern 2: Continuous Uncovered Segment

Visible array ban gayi:

1 1 1 0 0 0 0 1 1 0

Ab question kya pooch raha hai?

Minimum extra bulbs

Extra bulb ki range fixed hai:

[j-1, j, j+1]

Matlab:

1 bulb → max 3 positions

Ab uncovered segment dekho:

0 0 0 0

Length = 4

Question secretly ban gaya:

Length 4 ko
3-size pieces se cover karo

Ye coverage problem hai.




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