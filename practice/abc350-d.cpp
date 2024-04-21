#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;
    vector<vector<long long>> g(n);

    rep(i, 0, m) {
        long long a, b;
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    long long e = 0;
    queue<long long> q;
    vector<bool> used(n);
    rep(i, 0, n) {
        if(used[i]) continue;
        used[i] = true;
        q.push(i);
        long long cnt = 0;
        while(!q.empty()) {
            long long pos = q.front();
            q.pop();
            cnt++;
            rep(i, 0, g[pos].size()) {
                if(used[g[pos][i]]) continue;
                used[g[pos][i]] = true;
                q.push(g[pos][i]);
            }
        }
        e += (cnt * (cnt - 1)) / 2;
    }
    cout << e - m << endl;
    return 0;
} 