#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    map<char, int> mp;
    char tgt = '0';
    rep(i, 0, s.size()) {
        mp[s[i]]++;
    }
    for(auto c : mp) {
        if(mp[c.first] == 1) tgt = c.first;
    }

    rep(i, 0, s.size()) {
        if(s[i] == tgt) {
            cout << i+1 << endl;
            return 0;
        }
    }

    return 0;
} 