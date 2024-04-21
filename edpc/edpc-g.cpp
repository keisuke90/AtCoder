#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int n, m;
vector<vector<int>> g;
vector<int> dp(100009, -1);
int rec(int v) {
    if(dp[v] != -1) return dp[v];

    int res = 0;
    for(auto nv : g[v]) {
        res = max(res, rec(nv)+1);
    }
    return dp[v] = res;
}

int main(){

    cin >> n >> m;
    g.resize(n);
    rep(i, 0, m) {
        int x, y;
        cin >> x >> y;
        x--; y--;
        g[x].push_back(y);
    }

    int res = 0;
    rep(i, 0, n) res = max(res, rec(i));
    cout << res << endl;

    return 0;
} 