#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string w;
    cin >> w;
    map<char, int> mp;
    rep(i, 0, w.size()) {
        mp[w[i]]++;
    }
    bool ok = true;
    for(auto m : mp) {
        if(m.second%2==1) ok = false;
    }
    cout << (ok ? "Yes" : "No") << endl;
    return 0;
} 