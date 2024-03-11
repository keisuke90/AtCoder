#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    rep(i, 1, n+1) {
        if(i%2==0) continue;
        int cnt = 0;
        rep(j, 1, i+1) {
            if(i%j == 0) cnt++;
        }
        if(cnt == 8) ans++;
    }
    cout << ans << endl;
    return 0;
} 