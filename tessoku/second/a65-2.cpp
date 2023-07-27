#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> g(n+1, vector<int>());
    vector<int> dp(n+1);

    rep(i, 2, n+1) {
        int a;
        cin >> a;
        g[a].push_back(i);
    }
    for(int i = n; i >= 1; i--) {
        int cnt = 0;
        rep(j, 0, g[i].size()) {
            cnt+=dp[g[i][j]];
        }
        dp[i] = g[i].size() + cnt;
    }

    rep(i, 1, n+1) {
        cout << dp[i] << ' ';
    }
    cout << endl;
    return 0;
} 