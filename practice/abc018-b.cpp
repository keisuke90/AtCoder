#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    int n;
    cin >> s >> n;
    string L, M, R;
    rep(i, 0, n) {
        int l, r;
        cin >> l >> r;

        L = s.substr(0, l - 1);
        M = s.substr(l - 1, r-l + 1);
        reverse(M.begin(), M.end());
        R = s.substr(r, s.size() - r);
        s = L + M + R;
    }
    cout << s << endl;
    return 0;
} 