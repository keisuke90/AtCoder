#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, s, k;
    cin >> n >> s >> k;
    long long ans = 0;
    rep(i, 0, n) {
        int p, q;
        cin >> p >> q;
        ans += p*q;
    }
    if(ans>=s) cout << ans << endl;
    else cout << ans+k << endl;

    return 0;
} 