#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

long long c3(long long n) {
    return n*(n-1)*(n-2)/6;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];

    vector<int> cnt(n+1);
    vector<long long> sum(n+1);
    long long ans = 0;
    rep(k, 0, n) {
        ans += (long long)(k-1)*cnt[a[k]] - sum[a[k]];
        cnt[a[k]]++;
        sum[a[k]] += k;
    }

    rep(i, 0, n) ans -= c3(cnt[i+1]);
    cout << ans << endl;

    return 0;
} 