#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, d, x;
    cin >> n >> d >> x;
    int ans = x+n;
    int D = 0;
    rep(i, 0, n) {
        int a;
        cin >> a;
        rep(j, 2, d+1) {
            if((j-1)%a == 0) ans++;
        }
    }
    cout << ans << endl;
    return 0;
} 