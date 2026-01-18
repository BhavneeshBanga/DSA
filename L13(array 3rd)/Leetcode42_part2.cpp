class Solution {
public:
    int trap(vector<int>& height) {
        //prev_g = Previous greatest element
        //Previous greatest element array
        int n = height.size();
        int Prev_g[n];
        Prev_g[0] = -1;
        int maxx = height[0];
        for(int i = 1 ; i<n ; i++){
            Prev_g[i] = maxx;
            if(maxx < height[i]) maxx = height[i];
        }
        //next gratest element array
        Prev_g[n-1] = -1;
        maxx = height[n-1];
        for(int i = n-2 ; i>= 0 ; i--){
            if(max<Prev_g[i]) Prev_g[i] = max;
            if(maxx < height[i]) maxx = height[i];
        }
        //Calculating water
        int water = 0;
        for(int i = 1 ; i<n-1 ; i++){
            if(height[i] < Prev_g[i]){
                water += (Prev_g[i] - height[i]);
            }
        }
        return water;
    }
};