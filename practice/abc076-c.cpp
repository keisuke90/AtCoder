#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int n = s.size() - t.size();
    int I = -1;

    for(int i=n; i>=0; i--) {
        bool flg = true;
        rep(j, 0, t.size()) {
            if(s[i+j]!='?' && s[i+j]!=t[j]) {
                flg = false;
                break;
            }
        }
        if(flg) {
            I=i;
            break;
        }
    }


    if(I == -1) {
        cout << "UNRESTORABLE" << endl;
    } else {
        rep(i, 0, s.size()) {
            if(i==I) {
                rep(j,0,t.size()) cout << t[j];
                i+=t.size()-1;
            } else if(s[i]=='?') {
                cout << 'a';
            } else {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
} 