#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
const long long mod = 998244353;

// FIXME: WA
int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<long long>> dp(n, vector<long long>(m+1)), sum(n, vector<long long>(m+1));

    rep(i, 1, m+1) {
        dp[0][i] = 1;
        sum[0][i] = sum[0][i-1] + dp[0][i];
    }

    rep(i, 1, n) {
        rep(j, 1, m+1) {
            if(k == 0) {
                dp[i][j] = sum[i-1][m];
                dp[i][j] %= mod;
            } else {
                int l = j-k;
                int r = j+k;
                if(l > 0) {
                    dp[i][j] = (dp[i][j] + sum[i-1][l])%mod;
                }
                if(r <= m) {
                    dp[i][j] = (dp[i][j] + sum[i-1][m] - sum[i-1][r-1])%mod;
                }
            }
        }
        rep(j, 1, m+1) {
            sum[i][j] = (sum[i][j-1] + dp[i][j])%mod;
        }
    }

    cout << sum[n-1][m] << endl;

    return 0;
} 