#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[10009];
    rep(i, 0, n*7) cin >> a[i];

    rep(i, 0, n) {
        int ans = 0;
        rep(j, 0, 7) {
            ans += a[i*7+j];
        }
        cout << ans << ' ';
    }
    cout << endl;


} 