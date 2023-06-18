#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, x;
    int a[100009];
    cin >> n >> x;
    rep(i, 0, n) cin >> a[i];
    int ans = lower_bound(a, a+n, x) - a + 1;
    cout << ans << endl;
    return 0;
} 