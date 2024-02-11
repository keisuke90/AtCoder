#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long INF = 1e18;
    int n;
    cin >> n;
    vector<pair<long long, long long>> g[n];
    vector<bool> visited(n);
    vector<long long> dist(n, INF);
    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> q;
    vector<long long> a(n), b(n), x(n);

    rep(i, 0, n-1) {
        cin >> a[i] >> b[i] >> x[i];
        x[i]--;
        g[i].push_back({i+1, a[i]});
        g[i].push_back({x[i], b[i]});
    }

    dist[0] = 0;
    q.push({0, 0});

    while(!q.empty()) {
        long long pos = q.top().second; q.pop();

        if(visited[pos]) continue;

        visited[pos] = true;
        rep(i, 0, g[pos].size()) {
            int nex = g[pos][i].first;
            int cost = g[pos][i].second;
            if(dist[nex] > dist[pos] + cost) {
                dist[nex] = dist[pos] + cost;
                q.push({dist[nex], nex});
            }
        }
    }

    cout << dist[n-1] << endl;
    return 0;
} 