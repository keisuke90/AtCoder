#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    string s[200009];
    rep(i, 0, n) cin >> s[i];

    // 文字数の少ない順にソート
    // sort(s, s+n, [](string a, string b) {return a.size() < b.size();});
    // rep(i, 0, n) cout << s[i] << endl;

    set<string> st;
    int cnt = 0;
    rep(i, 0, n) {
        if(st.find(s[i]) == st.end()) {
            st.insert(s[i]);
            string sr = s[i];
            reverse(sr.begin(), sr.end());
            st.insert(sr);
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
} 