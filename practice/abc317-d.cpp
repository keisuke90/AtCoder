#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<long long, long long>> vec(n);
    long long zsum = 0;
    rep(i,0,n) {
        long long x, y, z;
        cin >> x >> y >> z;
        zsum += z;
        long long cost = (x+y)/2;
        if(x > (x+y)/2) vec[i] = {0, z};
        else vec[i] = {cost+1-x, z};
    }
    sort(vec.begin(), vec.end());
    vector<long long> dp(zsum+1, 1e18);
    dp[0]=0;

    rep(i, 0, n) {
        for(int j = zsum; j>=vec[i].second; j--) {
            dp[j]=min(dp[j], dp[j-vec[i].second]+vec[i].first);
        }
    }
    
    long long ans = 1e18;
    rep(i, zsum/2+1, zsum+1) ans = min(ans, dp[i]);
    cout << ans << endl;

    return 0;
} 