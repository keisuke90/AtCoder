#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> q(n), a(n), b(n);

    rep(i, 0, n) cin >> q[i];
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];

    int maxA = 1000000000, maxB = 1000000000;
    for(int i = 0; i < n; i++) {
        if(a[i] > 0) maxA = min(maxA, q[i] / a[i]);
        if(b[i] > 0) maxB = min(maxB, q[i] / b[i]);
    }

    if(maxA==0) {
        if(maxB==0) cout << 0 << endl;
        else cout << maxB << endl;
        return 0;
    }

    int ans = 0;
    rep(i, 0, maxA+1) {
        bool ok = true;
        int cnt = 1000000000;
        rep(j, 0, n) {
            int Q = q[j] - (a[j] * i);
            if (Q < 0) {
                ok = false;
                break;
            }
            if(b[j]==0) continue;
            int B = Q / b[j];
            cnt = min(cnt, B);
        }
        if(ok) ans = max(ans, i + cnt);
    }

    cout << ans << endl;


    return 0;
}
