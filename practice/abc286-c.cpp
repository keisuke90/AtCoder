#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int tui = n/2;
    long long ans = 1000000000000000000;
    int acnt = 0;
    rep(i, 0, n) {
        int bcnt = 0;
        rep(j, 0, tui) {
            if(s[j] != s[n-j-1]) bcnt++;
        }
        ans = min(ans, (long long)a*acnt+(long long)b*bcnt);
        rotate(s.begin(), s.begin()+1, s.end());
        acnt++;
    }
    cout << ans << endl;
    return 0;
} 