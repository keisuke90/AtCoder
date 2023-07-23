#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int n, m;
vector<int> g[100009];
vector<bool> visited(100009, false);
vector<int> path, ans;

void dfs(int pos) {
    if(pos == n) {
        ans = path;
        return;
    }
    visited[pos] = true;
    rep(i, 0, g[pos].size()) {
        int nex = g[pos][i];
        if(!visited[nex]) {
            path.push_back(nex);
            dfs(nex);
            path.pop_back();
        }
    }
    return;
}

int main(){
    cin >> n >> m;
    rep(i, 1, m+1) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    path.push_back(1);
    dfs(1);
    rep(i, 0, ans.size()) {
        cout << ans[i] << ' ';
    }
    cout << endl;
    return 0;
} 