#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> d(n+1), c(m+1);
    rep(i, 1, n+1) cin >> d[i];
    rep(i, 1, m+1) cin >> c[i];

    vector<vector<int>> dp(m+1, vector<int>(n+1, 1e9));
    dp[0][0] = 0;

    rep(i, 1, m+1) {
        rep(j, 0, n+1) {
            dp[i][j] = dp[i-1][j];
            if(j > 0 && j < m) dp[i][j] = min(dp[i][j], dp[i-1][j-1]+(c[i]*d[j]));
        }
    }
    cout << dp[m][n] << endl;
    return 0;
} 