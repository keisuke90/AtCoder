#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int n, m;
vector<vector<int>> g(200009);
vector<int> suretsu(200009, -1);
bool ok = true;

void dfs(int pos, int x) {
    suretsu[pos] = x;
    rep(i, 0, g[pos].size()) {
        if(suretsu[g[pos][i]] == -1) {
            dfs(g[pos][i], 1-x);
        } else {
            if(suretsu[g[pos][i]] == x) ok = false;
        }
    }
}

int main(){
    cin >> n >> m;
    vector<int> a(m), b(m);
    rep(i, 0, m) cin >> a[i], a[i]--;
    rep(i, 0, m) cin >> b[i], b[i]--;

    rep(i, 0, m) {
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }

    rep(i, 0, n) {
        if(suretsu[i] == -1) dfs(i, 0);
    }

    cout << (ok ? "Yes" : "No") << endl;
    return 0;
} 