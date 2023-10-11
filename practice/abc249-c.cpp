#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<string> v(n);
    rep(i, 0, n) cin >> v[i];
    int ans = 0;
    rep(bit, 0, 1<<n) {
        string s = "";
        map<char, int> mp;
        int cnt = 0;
        rep(i, 0, n) {
            if(bit & (1<<i)) {
                s += v[i];
            }
        }
        rep(i, 0, s.size()) {
            mp[s[i]]++;
        }
        for(auto a : mp) {
            if(a.second == k) cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;
} 