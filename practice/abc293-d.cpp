#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    vector<int> node(n);

    rep(i, 0, m) {
        int a, c;
        char b, d;
        cin >> a >> b >> c >> d;
        a--; c--;
        g[a].push_back(c);
        g[c].push_back(a);
        node[a]++;
        node[c]++;
    }

    int x = 0, y = 0;
    queue<int> q;
    vector<bool> visited(n);

    rep(i, 0, n) {
        if(visited[i]) continue;
        q.push(i);
        bool ok = true;
        while(!q.empty()) {
            int to = q.front(); q.pop();
            visited[to] = true;
            if(node[to] != 2) ok = false;
            for(int v : g[to]) {
                if(visited[v]) continue;
                q.push(v);
            }
        }
        if(ok) x++;
        else y++;
    }
    cout << x << ' ' << y << endl;
    return 0;
} 