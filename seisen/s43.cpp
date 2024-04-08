#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<char>> vec(n, vector<char>(5));
    char c[3] = {'R', 'B', 'W'};
    rep(i, 0, 5) {
        rep(j, 0, n) cin >> vec[j][i];
    }

    vector<map<char, int>> colors(n);
    rep(i, 0, n) {
        rep(j, 0, 5) {
            if(vec[i][j] == '#') continue;
            colors[i][vec[i][j]]++;
        }
    }

    vector<vector<int>> dp(n, vector<int>(3));
    dp[0][0] = 5-colors[0][c[0]];
    dp[0][1] = 5-colors[0][c[1]];
    dp[0][2] = 5-colors[0][c[2]];
    rep(i, 1, n) {
        rep(j, 0, 3) {
            dp[i][j] = min(dp[i-1][(j+1)%3]+(5-colors[i][c[j]]), dp[i-1][(j+2)%3]+(5-colors[i][c[j]]));
        }
    }

    int ans = 1e9;
    rep(i, 0, 3) ans = min(ans, dp[n-1][i]);
    cout <<ans << endl;

    return 0;
} 