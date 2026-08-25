// https://leetcode.com/problems/largest-triangle-area/?envType=problem-list-v2&envId=geometry


class Solution {
public:
    double triangleArea(double x1, double y1, double x2, double y2, double x3, double y3) {
        return abs(
            x1 * (y2 - y3) +
            x2 * (y3 - y1) +
            x3 * (y1 - y2)
        ) / 2.0;
    }
    double largestTriangleArea(vector<vector<int>>& p) {
        double ans = 1.0 * INT_MIN;
        for(int i = 0 ; i<p.size() ; i++) {
            for(int j = i+1 ; j<p.size() ; j++) {
                for(int k = j+1 ; k<p.size() ; k++) {
                    double area = triangleArea(p[i][0], p[i][1], p[j][0], p[j][1], p[k][0], p[k][1]);
                    ans = max(ans, area);
                }
            }    
        }
        return ans;
    }
};


// Step 1: Do vectors banao

// A ko origin maan lo.

// AB = (x2 - x1, y2 - y1)

// AC = (x3 - x1, y3 - y1)
// Step 2: Cross Product

// 2D mein cross product ki magnitude hoti hai
