#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, p, q, d[109];
    cin >> n >> p >> q;
    rep(i, 0, n) cin >> d[i];

    int ans = 0;
    int mind = 1000000;
    rep(i, 0, n) {
        mind = min(mind, d[i]);
    }

    ans = min(p, q+mind);
    cout << ans << endl;

    return 0;
} 