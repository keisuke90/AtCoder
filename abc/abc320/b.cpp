#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;

    int ans = 1;
    rep(i, 2, s.size()+1) {
        rep(j, 0, s.size() - i + 1 ) {
            string S = s.substr(j, i);
            string sr = S;
            reverse(sr.begin(), sr.end());
            if(S == sr) {
                ans = i;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
} 