#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m, p;
    cin >> n >> m >> p;
    vector<int> a(n), b(m);
    rep(i, 0, n) {
        cin >> a[i];
    }
    rep(i, 0, m) {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    long long ans = 0;

    vector<long long> b_sum(m+1);
    rep(i, 0, m) {
        b_sum[i+1] = b_sum[i]+b[i];
    }

    rep(i, 0, n) {
        int lb = lower_bound(b.begin(), b.end(), p-a[i]) - b.begin();
        ans += (long long) a[i] * lb;
        ans += b_sum[lb];
        ans += (long long) p * (m-lb);
    }

    cout << ans << endl;
    return 0;
} 