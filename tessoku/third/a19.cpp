#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n, w;
    cin >> n >> w;
    vector<vector<long long>> dp(109, vector<long long>(100009, -1e8));
    dp[0][0] = 0;
    rep(i, 1, n+1) {
        long long a, b;
        cin >> a >> b;
        rep(j, 0, w+1) {
            if(j < a) dp[i][j] = dp[i-1][j];
            else {
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-a]+b);
            }
        }
    }

    long long ans = 0;
    rep(i, 0, w+1) {
        ans = max(ans, dp[n][i]);
    }
    cout << ans << endl;
    return 0;
} 