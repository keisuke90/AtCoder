#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    bool ok = false;
    rep(i, 0, s.size()) {
        if(s == t) ok = true;
        rotate(t.begin(), t.begin()+1, t.end());
    }

    cout << (ok ? "Yes" : "No") << endl;
    return 0;
} 