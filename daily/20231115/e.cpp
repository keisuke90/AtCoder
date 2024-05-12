#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    map<string, int> mp;
    rep(i, 0, n) {
        string s, t;
        cin >> s;
        t = s;
        reverse(t.begin(), t.end());
        if(!mp[t] && !mp[s]) {
            ans++;
            mp[s]++;
            mp[t]++;
        }
    }
    cout << ans << endl;
    return 0;
} 