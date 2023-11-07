#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> mp;
    string f;
    cin >> f;
    mp[f]+=1;
    bool ok = true;

    rep(i, 0, n-1) {
        string s;
        cin >> s;
        if(mp[s] != 0 || f[f.size()-1] != s[0]) {
            ok = false;
        }
        mp[s]+=1;
        f=s;
    }
    cout << (ok ? "Yes" : "No") << endl;
    return 0;
} 