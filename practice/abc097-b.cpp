#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int x;
    cin >> x;
    int ans = 1;
    rep(i, 1, x) {
        rep(j, 2, x) {
            int p = pow(i, j);
            if(p > x) break;
            if(p <= x) ans = max(ans, p);
        }
    }
    cout << ans << endl;
    return 0;
}