// 
class Solution {
public:
    int getLength(vector<int>& nums) {
        int n = nums.size();
        int maxlen = 0;
        for(int i = 0 ; i<n ; i++) {
            unordered_map<int,int>freq;
            unordered_map<int,int>countFreq;
            for(int j = i ; j<n ; j++) {
                bool valid = false;
                int x = nums[j];
                int oldFreq = freq[x];
                freq[x]++;
                int newFreq = freq[x];
                if(oldFreq > 0) {
                    countFreq[oldFreq]--;
                    if(countFreq[oldFreq] == 0)
                        countFreq.erase(oldFreq);
                    
                }
                    countFreq[newFreq]++;
                

                if(freq.size() == 1)
                    valid = true;


                else if(countFreq.size() ==2){
                    auto it = countFreq.begin();
                    
                    int f1 = it->first;
                    ++it;
                    int f2 = it->first;
                    int small = min(f1, f2);
                    int large = max(f1, f2);
                    if(large == 2 * small)
                        valid = true;
                }
                if(valid) maxlen = max(maxlen, j - i + 1);
            }
        }
        return maxlen;
    }
};