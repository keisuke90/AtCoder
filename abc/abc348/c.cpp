#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, int> mp;
    rep(i, 0, n) {
        int a, c;
        cin >> a >> c;
        if(mp[c]==0) mp[c] = 1000000009;
        mp[c] = min(mp[c], a);
    }

    int ans = 0;
    for(auto v : mp) {
        if(v.second==1000000009) continue;
        ans = max(ans, v.second);
    }
    cout << ans << endl;
    return 0;
} 