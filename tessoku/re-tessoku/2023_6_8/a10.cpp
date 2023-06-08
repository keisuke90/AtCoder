#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n+1, 0), lm(n+1, 0), rm(n+1, 0);
    rep(i, 1, n+1) cin >> a[i];
    lm[1] = a[1];
    rm[n] = a[n];
    rep(i, 2, n+1) lm[i] = max(a[i], lm[i-1]);
    for(int i = n-1; i > 0; i--) rm[i] = max(a[i], rm[i+1]);

    int d;
    cin >> d;
    int ans = 0;
    rep(i, 1, d+1) {
        int l, r;
        cin >> l >> r;
        ans = max(lm[l-1], rm[r+1]);
        cout << ans << endl;
    }
    return 0;
} 