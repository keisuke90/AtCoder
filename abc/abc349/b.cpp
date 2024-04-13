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

    bool ok = true;
    map<int, int> mp2;
    for(auto v : mp) {
        mp2[v.second]++;
        if(mp2[v.second] > 2) {
            ok = false;
            break;
        }
    }

    for(auto v : mp2) {
        if(v.second == 1) {
            ok = false;
            break;
        }
    }




    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
} 