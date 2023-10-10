#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<long long> vec(n);
    rep(i, 0, n) cin >> vec[i];
    vector<long long> sum(n+1);
    rep(i, 1, n+1) sum[i] = sum[i-1] + vec[i-1];

    vector<long long> sumi(n-m+1);
    long long now = 0;
    rep(i, 0, m) now += vec[i] * (i+1);
    sumi[0] = now;
    rep(i, 1, n-m+1) {
        sumi[i] = sumi[i-1] + m * vec[m+i-1] - (sum[m+i-1] - sum[i-1]);
    }
    long long ans = -1000000000000000000ll;
    rep(i, 0, n-m+1) ans = max(ans, sumi[i]);
    cout << ans << endl;
    return 0;
} 