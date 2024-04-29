#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
const int mod = 1e9+7;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    queue<int> q;
    vector<int> used(n, -1), cnt(n, -1);
    q.push(0);
    used[0] = 0;
    cnt[0] = 1;
    while(!q.empty()) {
        int pos = q.front(); q.pop();

        for(auto next : g[pos]) {
            if(used[next] == -1) {
                used[next] = used[pos]+1;
                cnt[next] = cnt[pos];
                q.push(next);
            } else {
                if(used[next] == used[pos]+1) {
                    cnt[next] += cnt[pos];
                }
            }
            cnt[next]%=mod;
        }
    }
    if(used[n-1] == -1) cout << 0 << endl;
    else cout << cnt[n-1] << endl;
    return 0;
} 