#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    map<char, int> mp;
    vector<int> vec(n);
    for(int i = n-1; i>=0; i--) {
        mp[s[i]]++;
        vec[i] = mp[s[i]];
    }

    long long ans = 0;
    rep(i, 0, n) {
        ans += (n - i - 1) - (vec[i] - 1);
    }

    for(auto x: mp) {
        if(x.second > 1) {
            ans += 1;
            break;
        }
    }

    cout << ans << endl;
    return 0;
} 