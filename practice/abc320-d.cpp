#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int n, m;
vector<vector<array<int, 3>>> g(200009);
vector<pair<long long, long long>> ans(200009);
vector<bool> visited(200009);

void dfs(int pos, long long x, long long y) {
    visited[pos] = true;
    ans[pos] = {x, y};
    for(auto v : g[pos]) {
        if(visited[v[0]]) continue;
        long long d_x = x+v[1];
        long long d_y = y+v[2];
        dfs(v[0], d_x, d_y);
    }
}

int main(){
    cin >> n >> m;

    rep(i, 0, m) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        a--; b--;
        g[a].push_back({b, x, y});
        g[b].push_back({a, -x, -y});
    }

    dfs(0, 0, 0);

    rep(i, 0, n) {
        if(visited[i]) {
            cout << ans[i].first << " " << ans[i].second << endl;
        } else {
            cout << "undecidable" << endl;
        }
    }

    return 0;
} 