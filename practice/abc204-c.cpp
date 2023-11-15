#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int n, m;
int ans = 0;
vector<vector<int>> g(2009, vector<int>());
vector<bool> v(2009);

void dfs(int x) {
    if(v[x]) return;
    else v[x] = true;
    ans++;
    rep(i, 0, g[x].size()) {
        dfs(g[x][i]);
    }
}

int main(){
    cin >> n >> m;
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
    }

    rep(i, 0, n) {
        v = vector<bool>(2009);
        dfs(i);
    }

    cout << ans << endl;

    return 0;
} 