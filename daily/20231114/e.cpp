#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string x;
    cin >> x;
    map<char, int> xmp;
    rep(i, 0, x.size()) {
        xmp[x[i]] = i;
    }
    int n;
    cin >> n;
    vector<vector<int>> S(n);
    rep(i, 0, n) {
        string s;
        cin >> s;
        rep(j, 0, s.size()) {
            S[i].push_back(xmp[s[j]]);
        }
    }

    sort(S.begin(), S.end());
    for(auto s : S) {
        for(auto c : s) cout << x[c];
        cout << endl;
    }

    return 0;
} 