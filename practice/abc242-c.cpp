#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int mod = 998244353;

    vector<vector<long long>> dp(n+1, vector<long long>(10));

    rep(i, 1, 10) {
        dp[1][i] = 1;
    }
    rep(i, 2, n+1) {
        rep(j, 1, 10) {
            if(j == 1) {
                dp[i][j] = dp[i-1][j] + dp[i-1][j+1];
                dp[i][j] %= mod;
            } else if (j == 9) {
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
                dp[i][j] %= mod;
            } else {
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1];
                dp[i][j] %= mod;
            }
        }
    }

    long long ans = 0;
    rep(i, 1, 10) {
        ans += dp[n][i];
        ans %= mod;
    }
    cout << ans << endl;
    return 0;
} 