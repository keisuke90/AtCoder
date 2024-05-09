#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin>> s;
    string abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    map<char, int> mp;
    rep(i, 0, 26) mp[abc[i]] = i+1;
    long long ans = 0;
    reverse(s.begin(), s.end());
    long long x = 1;
    rep(i, 0, s.size()) {
        ans += x*mp[s[i]];
        x*=26;
    }
    cout << ans << endl;
    return 0;
} 