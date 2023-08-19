#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;

    rep(i, 0, s.size()) {
        if(s[i] != 'a' && s[i] != 'i' && s[i] != 'u' && s[i] != 'e' && s[i] != 'o') {
            cout << s[i];
        }
    }
    cout << endl;
    return 0;
} 