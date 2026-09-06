//    https://leetcode.com/problems/maximum-product-subarray/description/

// idea yeh hai ki ismai hame do array bnane padenge, ek jo max store karega ek jo min store kar ke rakhega

class Solution {
public:
    vector<int>dpM;
    vector<int>dpm;

    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int gmax = nums[0];
        
        dpM.clear();
        dpm.clear();

        dpM.resize(n, INT_MIN);
        dpm.resize(n, INT_MAX);

        dpM[0] = nums[0];
        dpm[0] = nums[0];

        if(n == 1){
             return dpM[0];
        } 
        else {
            for(int i = 1 ; i<n-1 ; i++) {
                dpM[i] = max({nums[i], dpM[i-1]*nums[i], dpm[i-1]*nums[i]});
                dpm[i] = min({nums[i], dpm[i-1]*nums[i], dpM[i-1]*nums[i]});
                gmax = max({gmax, dpM[i], dpm[i]});
            }
            dpM[n-1] = max({nums[n-1], dpM[n-2]*nums[n-1], dpm[n-2]*nums[n-1]});
            dpm[n-1] = min({nums[n-1], dpm[n-2]*nums[n-1], dpM[n-2]*nums[n-1]});

            gmax = max({gmax, dpM[n-1], dpm[n-1]});
        }
        return gmax;
    }
};