#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a, b;
    string s;
    cin >> a >> b >> s;
    bool ok = true;
    rep(i, 0, s.size()) {
        if(i < a) {
            if(!isdigit(s[i])) {
                ok = false;
            }
        } else if (i == a) {
            if(s[i] != '-') ok = false;
        } else if (i > a+b) {
            ok = false;
        } else if (i > a) {
            if(!isdigit(s[i])) ok = false;
        }
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
} 