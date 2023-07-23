#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int n, m;
vector<vector<int>> g(100009, vector<int>());
vector<bool> visited(100009, false);

void dfs(int pos) {
    visited[pos] = true;
    rep(i, 0, g[pos].size()) {
        int nex = g[pos][i];
        if(!visited[nex]) dfs(nex);
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
    dfs(1);
    rep(i, 1, n+1) {
        if(!visited[i]) {
            cout << "The graph is not connected." << endl;
            return 0;
        }
    }
    cout << "The graph is connected." << endl;
    return 0;
} 