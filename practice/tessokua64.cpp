#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> g[100009];

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<bool> visited(n+1);
    vector<int> time(n+1, 2000000009);

    rep(i, 0, m) {
        int a, b, c;
        cin >> a >> b >> c;
        g[a].push_back({b, c});
        g[b].push_back({a, c});
    }

    time[1] = 0;
    pq.push({1, 1});

    while(!pq.empty()) {
        int pos = pq.top().second; pq.pop();
        if(visited[pos]) continue;
        visited[pos] = true;
        rep(i, 0, g[pos].size()) {
            int next = g[pos][i].first;
            int cost = g[pos][i].second;
            if(time[next] > time[pos]+cost) {
                time[next] = time[pos] + cost;
                pq.push({time[next], next});
            }
        }
    }

    rep(i, 1, n+1) {
        if(time[i] == 2000000009) cout << "-1" << endl;
        else cout << time[i] << endl;
    }

    return 0;
} 