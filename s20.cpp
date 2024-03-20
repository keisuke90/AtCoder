#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n), b(n), c(n), d(n+1);
    rep(i,0,n) cin>>a[i];
    rep(i,0,n) cin>>b[i];
    rep(i,0,n) cin>>c[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    long long ans = 0;
    rep(i, 0, n) {
        long long aa = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
        long long cc = n - (upper_bound(c.begin(), c.end(), b[i]) - c.begin());
        ans += aa * cc;
    }

    cout << ans << endl;

    return 0;
} 
