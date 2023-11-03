#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> cost(n);
    vector<vector<int>> vec(n, vector<int>(m));
    rep(i, 0, n) {
        cin >> cost[i];
        rep(j, 0, m) {
            cin >> vec[i][j];
        }
    }

    int ans = 50000000;
    rep(i, 0, (1<<n)) {
        int tmp = 0;
        vector<int> a(m);
        rep(j, 0, n) {
            if(i & (1<<j)) {
                tmp += cost[j];
                rep(k, 0, m) a[k] += vec[j][k];
            }
        }
        bool flg = true;
        rep(j, 0, m) if(a[j] < x) flg = false;
        if(flg) ans = min(ans, tmp);
    }

    if(ans != 50000000) cout << ans << endl;
    else cout << -1 << endl;
    return 0;
} 