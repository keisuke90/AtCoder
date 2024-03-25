#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int N, W;
    cin >> N >> W;
    vector<vector<int> > dp(N+1, vector<int>(W+1, -1000000));
    dp[0][0] = 0;
    rep(i, 1, N+1) {
        int v, w;
        cin >> v >> w;
        rep(j, 0, W+1) {
            if(j < w) dp[i][j] = dp[i-1][j];
            else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-w]+v);
                // dp[i][j] = max(dp[i][j], dp[i][j-w]+v);
            }
        }
    }

    int ans = 0;
    rep(i, 0, W+1) {
        ans = max(ans, dp[N][i]);
    }
    cout << ans << endl;

    return 0;
} 