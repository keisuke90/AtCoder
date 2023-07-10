#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int N, W;
    cin >> N >> W;
    vector<vector<long long>> dp(109, vector<long long>(100009, -1000000000000LL));
    dp[0][0] = 0;
    rep(i, 1, N+1) {
        long long w, v;
        cin >> w >> v;
        rep(j, 0, W+1) {
            if(j < w) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j-w]+v);
        }
    }

    long long ans = 0;
    rep(i, 0, W+1) ans = max(ans, dp[N][i]);
    cout << ans << endl;
    return 0;
} 