#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    string s[n], d[m+1];
    rep(i, 0, n) cin >> s[i];

    rep(j, 1, m+1) cin >> d[j];

    int p[m+1];

    rep(i, 0, m+1) cin >> p[i];

    map<string, int> mp;

    rep(i, 0, m+1) {
        if(i == 0) mp["other"] = p[i];
        else mp[d[i]] = p[i];
    }
    int ans = 0;
    rep(i, 0, n) {
        if(mp.find(s[i]) != mp.end()) ans += mp[s[i]];
        else ans += mp["other"];
    }
    cout << ans << endl;
    return 0;
} 