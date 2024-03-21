#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int> > g(109);
    rep(i, 0, n) {
        int a, b;
        cin >> a >> b;
        a--;
        rep(j, 0, b) {
            int c;
            cin >> c;
            c--;
            g[a].push_back(c);
        }
    }

    vector<int> dist(109, -1);
    queue<int> q;
    q.push(0);
    dist[0] = 0;
    while(!q.empty()) {
        int pos = q.front(); q.pop();
        rep(i, 0, g[pos].size()) {
            int to = g[pos][i];
            if(dist[to] != -1) continue;
            dist[to] = dist[pos]+1;
            q.push(g[pos][i]);
        }
    }

    rep(i, 0, n) {
        cout << i+1 << ' ' << dist[i] << endl;
    }

    return 0;
} 