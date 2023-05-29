#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, 0, n) cin >> s[i];
    int ans = 1000000000;
    rep(x, 0, 10){
        char c = '0' + x;
        vector<int> num(10);
        rep(i, 0, n){
            rep(j, 0, 10){
                if(s[i][j] == c) num[j]++;
            }
        }
        int now = 0;
        rep(i, 0, 10) {
            int t = i + 10 * (num[i]-1);
            now = max(now, t);
        }
        ans = min(ans, now);
    }
    cout << ans << endl;
    return 0;
} 