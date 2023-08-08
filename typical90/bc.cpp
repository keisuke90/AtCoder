#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, p, q, a[109];
    cin >> n >> p >>  q;
    rep(i, 0, n) cin >> a[i];

    int ans = 0;
    rep(i, 0, n){
        rep(j, 0, i) {
            rep(k, 0, j) {
                rep(l, 0, k) {
                    rep(m, 0, l) {
                        if((long long)a[i]%p*a[j]%p*a[k]%p*a[l]%p*a[m]%p==q) ans++;
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
} 