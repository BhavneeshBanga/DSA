#include <bits/stdc++.h>
using namespace std;

double dp[105][105][105];


double fr(int r, int p, int s) {
    if(r == 0) return 0.0;
    if(p == 0) return 1.0;
    if(s == 0) return 0.0;
    if(dp[r][p][s] > -0.9) return dp[r][p][s];

    double total = (r*s + s*p + r*p)*(1.0);
    double ans = 0.0;

    ans += fr(r, s-1, p) * ((r*s)/total);
    ans += fr(r-1, s, p) * ((r*p)/total);
    ans += fr(r, s, p-1) * ((p*s)/total);

    return dp[r][p][s] = ans;
}

double fp(int r, int p, int s) {
    if(r == 0) return 0.0;
    if(p == 0) return 0.0;
    if(s == 0) return 1.0;
    if(dp[r][p][s] > -0.9) return dp[r][p][s];
    
    double total = (r*s + s*p + r*p)*(1.0);
    double ans = 0.0;
    
    ans += fp(r, s-1, p) * ((r*s)/total);
    ans += fp(r-1, s, p) * ((r*p)/total);
    ans += fp(r, s, p-1) * ((p*s)/total);

    return dp[r][p][s] = ans;
}

double fs(int r, int p, int s) {
    if(r == 0) return 1.0;
    if(p == 0) return 0.0;
    if(s == 0) return 0.0;
    if(dp[r][p][s] > -0.9) return dp[r][p][s];
    
    double total = (r*s + s*p + r*p)*(1.0);
    double ans = 0.0;
    
    ans += fs(r, s-1, p) * ((r*s)/total);
    ans += fs(r-1, s, p) * ((r*p)/total);
    ans += fs(r, s, p-1) * ((p*s)/total);

    return dp[r][p][s] = ans;
}


int main() {
    clock_t start = clock();
    int r, p, s;
    cin>>r>>p>>s;

    memset(dp, -1, sizeof dp);
    double f1 = fr(r, p, s);
    
    memset(dp, -1, sizeof dp);
    double f2 = fp(r, p, s);
    
    
    memset(dp, -1, sizeof dp);
    double f3 = fp(r, p, s);

    cout<<fixed<<setprecision(9)<<f1<<" "<<f2<<" "<<f3<<endl;


    #ifndef ONLINE_JUDGE
        clock_t end = clock();
        cout<<"\n\nExecuted in: "<<double(end-start)/ CLOCKS_PER_SEC*1000;
    #endif

    return 0;
}