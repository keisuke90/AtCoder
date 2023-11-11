#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;

    string ans = "";
    rep(i, 0, s.size()) {
        ans+=s[i];
        if(ans.size()>2) {
            if(ans.substr(ans.size()-3) == "ABC") {
                ans.erase(ans.end()-3, ans.end());
            }
        }
    }
    cout << ans << endl;

    return 0;
} 