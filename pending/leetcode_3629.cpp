// https://leetcode.com/problems/minimum-jumps-to-reach-end-via-prime-teleportation/description/

// solution
// https://chatgpt.com/c/6ac1335a-8080-83ee-95ac-3237f5d0604f

class Solution {
public:

    int MAXV;

    vector<int> spf;

    void buildSPF() {

        for (int i = 0; i <= MAXV; i++)
            spf[i] = i;

        if (MAXV >= 0) spf[0] = 0;
        if (MAXV >= 1) spf[1] = 1;

        for (int i = 2; i * i <= MAXV; i++) {

            if (spf[i] == i) {  // i is prime

                for (int j = i * i; j <= MAXV; j += i) {

                    if (spf[j] == j)
                        spf[j] = i;
                }
            }
        }
    }

    vector<int> primeFactors(int x) {

        vector<int> factors;

        while (x > 1) {

            int p = spf[x];

            factors.push_back(p);

            while (x % p == 0)
                x /= p;
        }

        return factors;
    }

    int minJumps(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 0;

        MAXV = *max_element(nums.begin(), nums.end());

        // Build SPF
        spf.resize(MAXV + 1);
        buildSPF();

        /*
            prime -> indices whose nums[index] is
            divisible by that prime
        */
        vector<vector<int>> mp(MAXV + 1);

        for (int i = 0; i < n; i++) {

            vector<int> factors = primeFactors(nums[i]);

            for (int p : factors) {
                mp[p].push_back(i);
            }
        }

        // BFS
        queue<int> q;

        vector<bool> vis(n, false);

        q.push(0);
        vis[0] = true;

        int steps = 0;

        while (!q.empty()) {

            int sz = q.size();

            while (sz--) {

                int curr = q.front();
                q.pop();

                if (curr == n - 1) return steps;

                // Move left
                if (curr - 1 >= 0 && !vis[curr - 1]) {

                    vis[curr - 1] = true;
                    q.push(curr - 1);
                }

                // Move right
                if (curr + 1 < n && !vis[curr + 1]) {

                    vis[curr + 1] = true;
                    q.push(curr + 1);
                }

                /*
                    Teleportation is possible only when
                    nums[curr] itself is prime.
                */
                if (nums[curr] >= 2 && spf[nums[curr]] == nums[curr]) {
                    // if ki second condition check karti hai ki number prime hia ya nahi

                    int p = nums[curr];

                    for (int next : mp[p]) {

                        if (!vis[next]) {

                            vis[next] = true;
                            q.push(next);
                        }
                    }
                    mp[p].clear();   // We will never need to scan this prime's bucket again.
                }
            }
            steps++;
        }
        return -1;
    }
};