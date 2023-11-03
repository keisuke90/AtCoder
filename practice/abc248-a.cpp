#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    string a = "0123456789";
    map<char, bool> mp;
    rep(i, 0, 10) mp[a[i]] = false;

    rep(i, 0, 9) mp[s[i]] = true;
    for(auto a : mp) if(!a.second) cout << a.first << endl;

    return 0;
} 