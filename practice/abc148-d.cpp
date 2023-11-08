#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int b = 1;
    int ans = 0;
    rep(i, 0, n) {
        int a;
        cin >> a;
        if(a == b) {
            b++;
        } else {
            ans++;
        }
    }
    if(b==1) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
} 