#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    bool ok = true;
    if(s[0] != '<') ok = false;
    if(s[s.size()-1] != '>') ok = false;
    rep(i, 1, s.size()-1) {
        if(s[i] != '=') ok = false;
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
} 