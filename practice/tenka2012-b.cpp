#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    getline(cin, s);

    bool flg = false;
    rep(i, 0, s.size()) {
        if(s[i] != ' ') {
            flg = true;
            cout << s[i];
        }
        else {
            if(flg) {
                cout << ',';
                flg = false;
            }
        }
    }
    cout << endl;
    return 0;
} 