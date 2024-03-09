#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

const int INF = 1e9;

int main() {
    string T;
    int N;
    cin >> T >> N;

    vector<vector<string>> bags(N);
    for(int i = 0; i < N; ++i) {
        int A;
        cin >> A;
        bags[i].resize(A);
        for(int j = 0; j < A; ++j) {
            cin >> bags[i][j];
        }
    }

    vector<vector<int>> dp(N+1, vector<int>(T.size()+1, INF));
    dp[0][0] = 0;

    for(int i = 0; i < N; ++i) {
        for(int j = 0; j <= T.size(); ++j) {
            dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
            for(const auto& str : bags[i]) {
                int len = str.size();
                if(j + len <= T.size() && T.substr(j, len) == str) {
                    dp[i+1][j+len] = min(dp[i+1][j+len], dp[i][j] + 1);
                }
            }
        }
    }

    if(dp[N][T.size()] == INF) cout << -1 << endl;
    else cout << dp[N][T.size()] << endl;

    return 0;
}