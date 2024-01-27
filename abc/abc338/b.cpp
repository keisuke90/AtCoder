#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    map<char, int> mp;

    rep(i, 0, s.size()) {
        mp[s[i]]++;
    }

    int cnt = 0;
    for(auto v : mp) {
        cnt = max(cnt, v.second);
    }

    for(auto v : mp) {
        if(v.second == cnt) {
            cout << v.first << endl;
            return 0;
        }
    }

    return 0;
} 