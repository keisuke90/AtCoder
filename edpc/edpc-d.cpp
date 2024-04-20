#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n, w;
    cin >> n >> w;
    vector<long long> W(n+1);
    vector<long long> V(n+1);
    vector<vector<long long>> dp(109, vector<long long>(100009, -1));
    rep(i, 1, n+1) {
        cin >> W[i] >> V[i];
    }

    dp[0][0] = 0;
    rep(i, 1, n+1) {
        rep(j, 0, w+1) {
            if(j < W[i]) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j-W[i]]+V[i]);
        }
    }

    long long ans = 0;
    rep(i, 0, w+1) {
        ans = max(ans, dp[n][i]);
    }
    cout << ans << endl;
    return 0;
} 