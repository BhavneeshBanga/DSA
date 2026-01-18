#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int trap(vector<int> &height){
    // prev_g = Previous greatest element
    // Previous greatest element array
    int n = height.size();
    int Prev_g[n];
    Prev_g[0] = -1;
    int maxx = height[0];
    for (int i = 1; i < n; i++)
    {
        Prev_g[i] = maxx;
        if (maxx < height[i])
        {
            maxx = height[i];
        }
    }
    // next gratest element array
    int Next_g[n];
    Next_g[n - 1] = -1;
    maxx = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        Next_g[i] = maxx;
        if (height[i] > maxx)
            maxx = height[i];
    }
    // minimum arary
    int mini[n];
    for (int i = 0; i < n; i++)
    {
        mini[i] = min(Prev_g[i], Next_g[i]);
    }
    // Calculating water
    int water = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (height[i] < mini[i])
        {
            water += (mini[i] - height[i]);
        }
    }
    return water;
}
