#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n+1), b(n+1), c(n+1);

    rep(i, 1, n+1) cin >> a[i];
    rep(i, 1, n+1) cin >> b[i];
    rep(i, 1, n) cin >> c[i];

    int ans = 0;
    int pre = 0;
    rep(i, 1, n+1) {
        ans += b[a[i]];
        if(pre + 1 == a[i]) ans += c[pre];
        pre = a[i];
    }
    cout << ans << endl;
    return 0;
} 