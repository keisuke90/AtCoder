#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    rep(i, 0, s.size()) {
        if(i == s.size()-1) cout << s[i];
        else cout << s[i] << ' ';
    }
    cout << endl;

    return 0;
} 