#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    vector<pair<char, int>> S, T;

    S.push_back({s[0], 1});
    rep(i, 1, s.size()) {
        if(s[i] == s[i-1]) S.back().second++;
        else S.push_back({s[i], 1});
    }

    T.push_back({t[0], 1});
    rep(i, 1, t.size()) {
        if(t[i] == t[i-1]) T.back().second++;
        else T.push_back({t[i], 1});
    }

    if(S.size() != T.size()) {
        cout << "No" << endl;
        return 0;
    }

    bool ok = true;
    rep(i, 0, S.size()) {
        if(S[i].first != T[i].first) ok = false;
        if(S[i].second == 1 && T[i].second != 1) ok = false;
        if(S[i].second != 1 && T[i].second == 1) ok = false;
        if(S[i].second > T[i].second) ok = false;
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
} 