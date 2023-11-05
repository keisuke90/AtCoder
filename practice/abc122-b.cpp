#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<char> acgt = {'A', 'C', 'G', 'T'};
    int ans = 0;
    int tmp = 0;
    rep(i, 0, s.size()) {
        bool ok = false;
        rep(j, 0, 4) {
            if(s[i] == acgt[j]) ok = true;
        }
        if(ok) {
            tmp++;
        } else {
            ans = max(ans, tmp);
            tmp = 0;
        }
    }
    ans = max(ans, tmp);
    cout << ans << endl;
    return 0;
} 