#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n), t(n);
    map<string, int> mp;
    rep(i, 0, n) {
        cin >> s[i] >> t[i];
        mp[s[i]]++;
        if(s[i] == t[i]) continue;
        mp[t[i]]++;
    }

    rep(i, 0, n) {
        if(mp[s[i]] > 1 && mp[t[i]] > 1) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
} 