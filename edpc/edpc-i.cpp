#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<double>> dp(n+1, vector<double>(n+1));
    dp[0][0] = 1.0;
    vector<double> p(n);
    rep(i, 0, n) cin >> p[i];

    rep(i, 0, n) {
        rep(j, 0, i+1) {
            dp[i+1][j+1] += dp[i][j] * p[i];
            dp[i+1][j] += dp[i][j] * (1.0 - p[i]);
        }
    }

    double ans = 0.0;
    for(int j = n/2 + 1; j<=n ; ++j) {
        ans += dp[n][j];
    }
    cout << fixed << setprecision(10) << ans << endl;

    return 0;
} 
