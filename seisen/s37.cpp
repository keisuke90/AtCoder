#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> vec(m+1);
    rep(i, 1, m+1) cin >> vec[i];
    vector<vector<int> > dp(m+1, vector<int> (n+1, 1e5));
    dp[0][0] = 0;
    rep(i, 1, m+1) {
        rep(j, 0, n+1) {
            dp[i][j] = dp[i-1][j];
            if(j >= vec[i] && dp[i][j-vec[i]] != 1e5) {
                dp[i][j] = min(dp[i][j], dp[i][j-vec[i]]+1);
            }
        }
    }

    cout << dp[m][n] << endl;
    return 0;
} 