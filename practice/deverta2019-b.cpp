#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int r, g, b, n;
    cin >> r >> g >> b >> n;
    int ans = 0;
    rep(i, 0, 3001) {
        rep(j, 0, 3001) {
            if(i*r+j*g>n) break;
            if((n-(i*r+j*g))%b==0) ans++;
        }
    }
    cout << ans << endl;
    return 0;
} 