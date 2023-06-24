#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    string s[109];
    cin >> n;
    string ans = "No";
    rep(i, 0, n) cin >> s[i];
    
    rep(i, 0, n) {
        rep(j, 0, n) {
            if (i == j) continue;
            string t = s[i] + s[j];
            string r = s[i] + s[j];
            // cout << t << ' ' << r << endl;
            reverse(r.begin(), r.end());
            if(t == r) ans = "Yes";
        }
    }
    cout << ans << endl;

    return 0;
} 