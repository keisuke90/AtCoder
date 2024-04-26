#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    vector<int> d(n);
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        d[b]++;
    }

    vector<int> ans(n);
    queue<int> q;
    int cnt = 0;
    rep(i, 0, n) {
        if(d[i] == 0) q.push(i);
    }
    while(!q.empty()) {
        if(q.size() > 1) {
            cout << "No" << endl;
            return 0;
        }
        int p = q.front(); q.pop();
        cnt++;
        ans[p] = cnt;
        for(auto v : g[p]) {
            d[v]--;
            if(d[v] == 0) q.push(v);
        }
    }

    cout << "Yes" << endl;
    rep(i, 0, n) cout << ans[i] << ' ';
    cout << endl;

    return 0;
} 