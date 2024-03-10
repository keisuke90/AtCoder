#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    map<char, int> m;
    rep(i, 1, 27) {
        m[abc[i-1]] = i;
    }
    long long ans = 0;
    rep(i, 0, s.size()) {
        long long tmp = 1;
        rep(j, 1, i+1) {
            tmp*=26;
        }
        ans += tmp * m[s[i]];
    }
    cout << ans << endl;
    return 0;
}   