// Problem Link - 
/* By Bhavneesh Banga */

///* Bouncer *///


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define mod 1000000007
#define inf 1e18
#define endl "\n"
#define pb push_back
#define vi vector<ll>
#define vs vector<string>
#define pii pair<ll,ll>
#define ump unordered_map
#define mp make_pair
#define pq_max priority_queue<ll>
#define pq_min priority_queue<ll,vi,greater<ll> >
#define all(n) n.begin(),n.end()
#define ff first
#define ss second
#define mid(l,r) (l+(r-l)/2)
#define bitc(n) __builtin_popcount(n)
#define loop(i,a,b) for(int i=(a);i<=(b);i++)
#define looprev(i,a,b) for(int i=(a);i>=(b);i--)

template <typename T>
T gcd(T a, T b){
    if(a%b) return gcd(b,a%b);
    return b;
}

template <typename T>
T lcm(T a, T b){
    return (a*(b/gcd(a,b)));
}

void file_i_o() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

ll m, n;
char mat[105][105];
ll dp[105][105][105];


ll f(ll i, ll j, ll x, ll y) {
    if( i > n or j> m or x > n or y > m or mat[i][j] == '#' or mat[x][y] == '#') return 0;

    if( i == n && j == m) {
        return mat[i][j] == '*';
    }

    if(dp[i][j][x] != -1) return dp[i][j][x];

    ll result = INT_MIN;

    result = max(result, f(i+1, j, x+1, y));
    result = max(result, f(i, j+1, x+1, y));
    result = max(result, f(i+1, j, x, y+1));
    result = max(result, f(i, j+1, x, y+1));

    result += (mat[i][j] == '*');
    result += (mat[x][y] == '*');

    // remove repitition

    if(i == x and j == y and mat[i][j] == '*') result--;

    return dp[i][j][x] = result;


}
int main() {

    clock_t begin = clock();
    file_i_o();

    // Write your code here....
    int t;
    cin>>t;
    while(t--) {
        cin>>m>>n;
        memset(dp, -1, sizeof dp);
        for(int i = 1 ; i<= n ; i++) {
            for(int j = 1 ; j<= m ; j++) {
                cin>>mat[i][j];
            }
        }
        cout<<f(1,1,1,1)<<"\n";
    }

    // #ifndef ONLINE_JUDGE
    //     clock_t end = clock();
    //     cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000  << " ms";
    // #endif

    return 0;
}
