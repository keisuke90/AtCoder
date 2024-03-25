#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, W;
    cin >> n >> W;

    vector<vector<int> > dp(n+1, vector<int>(W+1, -1000000));

    dp[0][0] = 0;
    rep(i, 1, n+1) {
        int v, w;
        cin >> v >> w;
        rep(j, 0, W+1) {
            if(j < w) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j-w]+v);
        }
    }

    int ans = 0;
    rep(i, 0, W+1) {
        ans = max(ans, dp[n][i]);
    }
    cout << ans << endl;
    return 0;
} 