#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int ans = 0;
    rep(i, 0, n) {
        int x;
        cin >> x;
        ans += min(x*2, (k-x)*2);
    }
    cout << ans << endl;
    return 0;
} 