#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<char>> vec(h, vector<char>(w));
    vector<vector<long long>> dp(h, vector<long long>(w));
    rep(i, 0, h) {
        rep(j, 0, w) cin >> vec[i][j];
    }

    dp[0][0] = 1;
    int dy[] = {0, 1};
    int dx[] = {1, 0};
    rep(i, 0, h) {
        rep(j, 0, w) {
            rep(k, 0, 2) {
                int ny = i+dy[k];
                int nx = j+dx[k];
                if(ny < h && nx < w && vec[ny][nx] == '.') {
                    dp[ny][nx] += dp[i][j];
                    dp[ny][nx] %= 1000000007;
                }
            }
        }
    }
    cout << dp[h-1][w-1] << endl;
    return 0;
} 