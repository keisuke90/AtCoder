#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string t;
    int n;
    cin >> t >> n;
    vector<vector<string>> vec(n);
    rep(i, 0, n) {
        int a;
        cin >> a;
        vec[i].resize(a);
        rep(j, 0, a) {
            cin >> vec[i][j];
        }
    }

    vector<vector<int>> dp(n+1, vector<int>(t.size()+1, 1000000009));
    dp[0][0] = 0;


    rep(i, 0, n) {
        rep(j, 0, t.size()+1) {
            dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
            for(string str : vec[i]) {
                int len = str.size();
                if(j + len <= t.size() && t.substr(j, len) == str) {
                    dp[i+1][j+len] = min(dp[i+1][j+len], dp[i][j]+1);
                }
            }
        }
    }

    if(dp[n][t.size()] == 1000000009) cout << -1 << endl;
    else cout << dp[n][t.size()] << endl;

    return 0;
} 