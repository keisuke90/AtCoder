#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int n, m;
vector<pair<int, int>> g[100009]; 
int cur[100009];
bool kakutei[100009];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;

int main(){
    cin >> n >> m;
    rep(i, 1, m+1) {
        int a, b, c;
        cin >> a >> b >> c;
        g[a].push_back(make_pair(b, c));
        g[b].push_back(make_pair(a, c));
    }
    rep(i, 1, n+1) kakutei[i] = false;
    rep(i, 1, n+1) cur[i] = 2000000000;

    cur[1] = 0;
    q.push(make_pair(cur[1], 1));

    while(!q.empty()) {
        int pos = q.top().second;
        q.pop();
        if(kakutei[pos]) continue;

        kakutei[pos] = true;
        rep(i, 0, g[pos].size()) {
            int nex = g[pos][i].first;
            int cost = g[pos][i].second;
            if(cur[nex] > cur[pos] + cost) {
                cur[nex] = cur[pos] + cost;
                q.push(make_pair(cur[nex], nex));
            }
        }
    }

    rep(i, 1, n+1) {
        if(cur[i] == 2000000000) cout << "-1" << endl;
        else cout << cur[i] << endl;
    }
    return 0;
} 