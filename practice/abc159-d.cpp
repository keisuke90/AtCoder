#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    map<long long, long long> mp;
    rep(i, 0, n) {
        cin >> vec[i];
        mp[vec[i]] += 1;
    }
    long long cnt = 0;
    for(auto& m : mp) {
        cnt += (m.second * (m.second - 1)) / 2;
    }

    rep(i, 0, n) {
        long long a = (mp[vec[i]] * (mp[vec[i]] - 1)) / 2;
        long long b = ((mp[vec[i]] - 1) * (mp[vec[i]] - 2)) / 2;
        long long ans = cnt - a + b;
        cout << ans << endl;
    }

    return 0;
} 