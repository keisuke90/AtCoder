#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    map<long long ,long long> mp;
    rep(i, 0, n) {
        int s, c;
        cin >> s >> c;
        mp[s] = c;
    }

    int ans = 0;
    while(mp.size()) {
        auto [s,c] = *mp.begin();
        mp.erase(mp.begin());
        ans += c%2;
        c /= 2;
        if(c) mp[s*2] += c;
    }
    cout << ans << endl;
    return 0;
} 