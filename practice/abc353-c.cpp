#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    rep(i, 0, n) cin >> a[i];
    sort(a.begin(), a.end());

    long long cnt = 0;
    int r = n;
    rep(i, 0, n) {
        r = max(r, i+1);
        while(r - 1 > i && a[r-1] + a[i] >= 100000000) r--;
        cnt += n-r;
    }
    long long ans = 0;
    rep(i, 0, n) ans += a[i]*(n-1);
    ans -= cnt * 100000000;
    cout << ans << endl;

    return 0;
} 