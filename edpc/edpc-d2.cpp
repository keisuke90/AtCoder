#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int N, W;
    cin >> N >> W;
    vector<long long> w(N+1), v(N+1);
    rep(i, 1, N+1) cin >> w[i] >> v[i];
    vector<vector<long long>> dp(N+1, vector<long long>(W+1));

    long long ans = 0;
    rep(i, 1, N+1) {
        rep(j, 0, W+1) {
            if(j < w[i]) {
                dp[i][j] = dp[i-1][j];
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]]+v[i]);
            }
        }
    }

    ans = dp[N][W];
    cout << ans << endl;
    return 0;
} 