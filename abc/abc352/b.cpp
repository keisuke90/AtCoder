#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int now = 0;
    rep(i, 0, s.size()) {
        rep(j, now, t.size()) {
            if(s[i] == t[j]) {
                cout << j+1 << ' ';
                now = j+1;
                break;
            }
        }
    }
    cout << endl;
    return 0;
} 