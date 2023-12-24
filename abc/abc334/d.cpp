#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<long long> r(n);
    rep(i, 0, n) cin >> r[i];
    sort(r.begin(), r.end());
    rep(i, 1, n) r[i] += r[i-1];

    rep(i, 0, q) {
        long long Q;
        cin >> Q;
        int ans = upper_bound(r.begin(), r.end(), Q) - r.begin();
        cout << ans << endl;
    }
    return 0;
} 