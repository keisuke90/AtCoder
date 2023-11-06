#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    set<char> S;
    rep(i, 0, s.size()) {
        S.insert(s[i]);
    }
    if(S.size() == 26) {
        cout << "None" << endl;
        return 0;
    }

    string alp = "abcdefghijklmnopqrstuvwxyz";
    rep(i, 0, alp.size()) {
        if(find(S.begin(), S.end(), alp[i]) == S.end()) {
            cout << alp[i] << endl;
            return 0;
        }
    }

    return 0;
} 