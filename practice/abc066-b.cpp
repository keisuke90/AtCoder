#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
bool check(string S) {
    string s1 = S.substr(0, S.size() / 2);
    string s2 = S.substr(S.size() / 2, S.size() / 2);
    return s1 == s2;
}

int main(){
    string s;
    cin >> s;
    string str;

    int ans = 0;
    rep(i, 0, s.size()) {
        str += s[i];
        if(str.size() % 2 == 0 && i != s.size() - 1) {
            if(check(str)) ans = i + 1;
        }
    }

    cout << ans << endl;
    return 0;
} 