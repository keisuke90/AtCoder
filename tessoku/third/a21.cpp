#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p(n+1), a(n+1);
    rep(i, 1, n+1) cin >> p[i] >> a[i];
    vector<vector<int>> dp(2009, vector<int>(2009));

    for(int len = n-2; len>=0; len--) {
        rep(l, 1, n-len+1) {
            int r = l + len;

            int score1 = 0;
            if(l<=p[l-1] && p[l-1] <= r) score1 = a[l-1];

            int score2 = 0;
            if(l<=p[r+1] && p[r+1]<=r) score2 = a[r+1];

            if(l==1) dp[l][r] = dp[l][r+1]+score2;
            else if(r==n) dp[l][r] = dp[l-1][r]+score1;
            else dp[l][r] = max(dp[l-1][r]+score1, dp[l][r+1]+score2);
        }
    }

    int ans = 0;
    rep(i, 1, n+1) ans = max(ans, dp[i][i]);
    cout << ans << endl;

    return 0;
} 