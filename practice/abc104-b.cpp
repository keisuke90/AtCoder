#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    if(s[0] != 'A') {
        cout << "WA" << endl;
        return 0;
    }

    int cnt = 0;
    rep(i, 2, s.size()-1) if(s[i] == 'C') cnt++;
    if(cnt!=1) {
        cout << "WA" << endl;
        return 0;
    }
    cnt = 0;
    rep(i, 0, s.size()) if(islower(s[i])) cnt++;
    if(cnt != s.size()-2) {
        cout << "WA" << endl;
        return 0;
    }
    
    cout << "AC" << endl;
    return 0;
} 