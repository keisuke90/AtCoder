#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    string b = "BDEFHIJKLMNOPQRSUVWXYZ";

    int ans = 0;
    rep(i, 0, s.size()) {
        rep(j, i, s.size()) {
            string ss = s.substr(i, 1+j-i);
            bool ok = true;
            rep(k, 0, b.size()) {
                if(ss.find(b[k]) != string::npos) {
                    ok = false;
                    break;
                }
            }
            if(ok) {
                int n = ss.size();
                ans = max(ans, n);
            }
        }
    }
    cout << ans << endl;
    return 0;
} 