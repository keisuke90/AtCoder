#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    bool flg = true;
    rep(i, 0, s.size()) {
        if(s[i] == '|') {
            flg = !flg;
            continue;
        }
        if(flg) cout << s[i];
    }
    cout << endl;
    return 0;
}