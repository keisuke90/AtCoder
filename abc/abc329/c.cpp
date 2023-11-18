#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    char pre = s[0];
    map<char, int> mp;
    int cnt = 0;
    rep(i, 0, n) {
        if(pre == s[i]) {
            cnt++;
        } else {
            mp[pre] = max(mp[pre], cnt);
            pre = s[i];
            cnt = 1;
        }
    }
    mp[pre] = max(mp[pre], cnt);
    long long ans = 0;
    for(auto m : mp) {
        ans+=m.second;
    }
    cout << ans << endl;
    return 0;
}
