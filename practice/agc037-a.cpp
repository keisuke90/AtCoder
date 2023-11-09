#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;

    string s1 = "";
    string s2 = "";
    int ans = 0;
    rep(i, 0, s.size()) {
        s2 += s[i];
        if(s1 != s2) {
            ans++;
            s1 = s2;
            s2 = "";
        }
    }
    cout << ans << endl;
    return 0;
} 