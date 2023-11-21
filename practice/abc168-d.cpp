#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n, vector<int>());

    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    queue<int> q;
    vector<bool> visited(n);
    vector<int> ans(n);
    q.push(0);

    while(!q.empty()) {
        int cur = q.front(); q.pop();
        for(auto to : g[cur]) {
            if(!visited[to]) {
                ans[to] = cur;
                visited[to] = true;
                q.push(to);
            }
        }
    }
    cout << "Yes" << endl;
    rep(i, 1, n) cout << ans[i]+1 << endl;
    return 0;
} 