#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> mp;
    rep(i, 0, n) {
        string s;
        cin >> s;
        mp[s]++;
    }

    int m = 0;
    string ans = "";
    for(auto p : mp) {
        m = max(m, p.second);
        if(m == p.second) ans = p.first;
    }
    cout << ans << endl;
    return 0;
} 