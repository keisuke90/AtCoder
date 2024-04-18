#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
vector<vector<int>> g(200009);
vector<int> counter(200009);
vector<bool> visited(200009);

void dfs(int pos, int x) {
    visited[pos] = true;
    counter[pos] += x;

    rep(i, 0, g[pos].size()) {
        int next = g[pos][i];
        if(!visited[next]) {
            dfs(next, counter[pos]);
        }
    }
}

int main(){
    int n, q;
    cin >> n >> q;
    rep(i, 0, n-1) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    rep(i, 0, q) {
        int p, x;
        cin >> p >> x;
        p--;
        counter[p] += x;
    }

    dfs(0, 0);

    rep(i, 0, n) {
        cout << counter[i] << ' ';
    }
    cout << endl;
    return 0;
} 