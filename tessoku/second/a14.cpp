#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int n, k, a[1009], b[1009], c[1009], d[1009];
int ab[1000009], cd[1000009];

int main(){
    cin >> n >> k;
    rep(i, 1, n+1) cin >> a[i];
    rep(i, 1, n+1) cin >> b[i];
    rep(i, 1, n+1) cin >> c[i];
    rep(i, 1, n+1) cin >> d[i];

    rep(i, 1, n+1) rep(j, 1, n+1) ab[(i-1)*n+j] = a[i] + b[j];
    rep(i, 1, n+1) rep(j, 1, n+1) cd[(i-1)*n+j] = c[i] + d[j];
    sort(cd+1, cd+n*n+1);

    rep(i, 1, n*n+1) {
        int pos = lower_bound(cd+1, cd+n*n+1, k-ab[i]) - cd;
        if(pos <= n*n && cd[pos] == k-ab[i]) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
} 