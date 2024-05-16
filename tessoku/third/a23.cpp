#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> vec(109, vector<int>(19));
    vector<vector<int>> dp(109, vector<int>(1024, 1e9));
    rep(i, 1, m+1) {
        rep(j, 1, n+1) cin >> vec[i][j];
    }

    dp[0][0] = 0;
    rep(i, 1, m+1) {
        rep(j, 0, (1 << n)) {
            int already[19];
            rep(k, 1, n+1) {
                if((j / (1 << (k-1))) % 2 == 0) already[k] = 0;
                else already[k] = 1;
            }

            int v = 0;
            rep(k, 1, n+1) {
                if(already[k] == 1 || vec[i][k] == 1) v += (1 << (k-1));
            }

            dp[i][j] = min(dp[i][j], dp[i-1][j]);
            dp[i][v] = min(dp[i][v], dp[i-1][j]+1);
        }
    }

    if(dp[m][(1 << n) - 1] == 1e9) cout << -1 << endl;
    else cout << dp[m][(1 << n) - 1] << endl;

    return 0;
} 