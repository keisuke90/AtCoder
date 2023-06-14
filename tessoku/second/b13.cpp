#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
long long n, k;
long long a[100009], r[100009], sum[100009];

long long calc(int l, int r) {
    return sum[r] - sum[l-1];
}

int main(){
    cin >> n >> k;
    rep(i, 1, n+1) cin >> a[i];
    sum[0] = 0;
    rep(i, 1, n+1) sum[i] = a[i] + sum[i-1];

    rep(i, 1, n+1) {
        if(i == 1) r[i] = 0;
        else r[i] = r[i-1];
        while(r[i] < n && calc(i, r[i]+1) <= k) r[i] += 1;
    }

    long long ans = 0;
    rep(i, 1, n+1) ans += (r[i]-i+1);
    cout << ans << endl;
    return 0;

} 