#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int n, m;
vector<int> dist(100009, -1);
vector<int> g[100009];
queue<int> q;

int main(){
    cin >> n >> m;
    rep(i, 1, m+1) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    q.push(1);
    dist[1] = 0;
    while(!q.empty()) {
        int pos = q.front();
        q.pop();
        rep(i, 0, g[pos].size()) {
            int to = g[pos][i];
            if(dist[to] == -1) {
                dist[to] = dist[pos] + 1;
                q.push(to);
            }
        }
    }

    rep(i, 1, n+1) cout << dist[i] << endl; 
    return 0;
} 