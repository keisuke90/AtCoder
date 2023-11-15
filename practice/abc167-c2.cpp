#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> c(n);
    vector<vector<int>> vec(n, vector<int>(m));
    rep(i, 0, n) {
        cin >> c[i];
        rep(j, 0, m) cin >> vec[i][j];
    }
    int ans = 1000000000;
    rep(bit, 0, (1<<n)) {
        int tmp = 0;
        vector<int> a(m);
        bool ok = true;
        rep(i, 0, n) {
            if(bit & (1<<i)) {
                tmp+=c[i];
                rep(j, 0, m) {
                    a[j] += vec[i][j];
                }
            }
        }
        rep(i, 0, m) {
            if(a[i]<x) ok = false;
        }
        if(ok) ans = min(ans, tmp);
    }

    if(ans == 1000000000) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
} 