#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    string tgt = "keyence";
    rep(i, 0, s.size()) {
        rep(j, 0, s.size()) {
            if(i+j>=s.size()) break;
            string ans = s;
            ans.erase(i, j);
            if(ans==tgt) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
} 