#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> mp;
    int m = 0;
    rep(i, 0, n) {
        string s;
        cin >> s;
        mp[s] += 1;
        m = max(m, mp[s]);
    }

    for(auto c : mp) {
        if(c.second == m) cout << c.first << endl;
    }

    return 0;
} 