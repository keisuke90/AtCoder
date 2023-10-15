#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

bool check(string s, string t) {
    if(s.size() > t.size()) return check(t, s);
    if(t.size() - 1 > s.size()) return false;
    int i = 0, j = 0, cnt = 0;
    while(i < s.size()) {
        if(s[i] == t[j]) {
            i++;
            j++;
        } else {
            cnt++;
            if(cnt > 1) return false;
            if(s.size() == t.size()) i++;
            j++;
        }
    }
    return true;
}

// FIXME: TLE
int main(){
    int n;
    string t2;
    cin >> n >> t2;
    vector<int> ans;

    rep(i, 0, n) {
        string s;
        cin >> s;
        if(check(s, t2)) ans.push_back(i+1);
    }

    cout << ans.size() << endl;
    rep(i, 0, ans.size()) cout << ans[i] << ' ';
    cout << endl;
    return 0;
} 