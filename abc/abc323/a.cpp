#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    bool flg = true;
    rep(i, 1, s.size()+1) {
        int n = s[i-1] - '0';
        if(i >= 2 && i%2 == 0) {
            if(n == 1) {
                flg = false;
                continue;
            }
        }
    }
    if(flg) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
} 