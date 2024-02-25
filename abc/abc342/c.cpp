#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, q;
    string s;
    cin >> n >> s >> q;
    map<char, char> mp;
    string abc = "abcdefghijklmnopqrstuvwxyz";
    rep(i, 0, abc.size()) {
        mp[abc[i]] = abc[i];
    }

    rep(i, 0, q) {
        char c, d;
        cin >> c >> d;
        for(auto v : mp) {
            if(v.second == c) mp[v.first] = d;
        }
    }

    rep(i, 0, s.size()) {
        cout << mp[s[i]];
    }
    cout << endl;

    return 0;
} 