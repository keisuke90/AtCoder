#include <bits/stdc++.h>
#include <vector>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    vector<vector<int>> b(h, vector<int>(w));
    rep(i, 0, h) {
        rep(j, 0, w) cin >> a[i][j];
    }
    rep(i, 0, h) {
        rep(j, 0, w) cin >> b[i][j];
    }

    queue<vector<vector<int>>> q;
    map<vector<vector<int>>, int> dist;
    auto push = [&](vector<vector<int>>& s, int d) {
        if(dist.count(s)) return;
        dist[s] = d;
        q.push(s);
    };
    push(a, 0);
    while(!q.empty()) {
        vector<vector<int>> s = q.front(); q.pop();
        int d = dist[s];
        rep(i, 0, h-1) {
            vector<vector<int>> ns = s;
            swap(ns[i], ns[i+1]);
            push(ns, d+1);
        }
        rep(j, 0, w-1) {
            vector<vector<int>> ns = s;
            rep(i, 0, h) {
                swap(ns[i][j], ns[i][j+1]);
            }
            push(ns, d+1);
        }
    }
    if(dist.count(b)) cout << dist[b] << endl;
    else cout << -1 << endl;
    return 0;
} 