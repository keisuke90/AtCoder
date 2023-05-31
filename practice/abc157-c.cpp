#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int ans = -1;
    vector a(n, 10);
    rep(i, 0, m){
        int s, c;
        cin >> s >> c;
        if(n >= 2 && s == 1 && c == 0) {
            cout << ans << endl;
            return 0;
        }
        if(a[s-1] != 10 && a[s-1] != c) {
            cout << ans << endl;
            return 0;
        }
        a[s-1] = c;
    }
    int b = 1;
    for(int i = n-1; i >= 0; i--){
        if(a[i] != 10) ans += a[i] * b;
        b *= 10;
    }
    if(n == 3 && a[0] == 10) ans += 100;
    if(n == 2 && a[0] == 10) ans += 10;
    if(ans != -1) ans+=1;
    if(n == 1 && a[0] == 0) ans = 0;
    if(n == 1 && m == 0) ans = 0;
    cout << ans << endl;
    return 0;
} 