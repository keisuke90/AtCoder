#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, w;
    cin >> n >> w;
    int a[109], b[109];
    rep(i, 1, n+1) cin >> a[i] >> b[i];
    vector<vector<long long>> dp(n+1, vector<long long>(w+1));

    rep(i, 1, n+1) {
        rep(j, 0, w+1) {
            if(j < a[i]) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j-a[i]]+b[i]);
        }
    }
    long long ans = 0;
    rep(i, 0, w+1) ans = max(ans, dp[n][i]);
    cout << ans << endl;
    return 0;
} 