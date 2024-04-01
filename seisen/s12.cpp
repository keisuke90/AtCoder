#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int ans = 0;
    rep(bit, 0, (1<<n)) {
        int t = bitset<32>(bit).count();
        if(t <= ans) continue;

        bool ok = true;
        rep(i, 0, n) {
            rep(j, 0, i) {
                if(bit & (1<<i) && bit & (1<<j)) {
                    if(find(g[i].begin(), g[i].end(), j) == g[i].end()) {
                        ok = false;
                    }
                }
            }
        }
        if(ok) ans = t;
    }
    cout << ans << endl;
    return 0;
} 