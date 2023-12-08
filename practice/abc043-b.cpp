#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    stack<char> st;
    rep(i, 0, s.size()) {
        if(s[i]=='B' && st.size()>0) {
            st.pop();
        } else if(s[i]=='0' || s[i]=='1') {
            st.push(s[i]);
        }
    }
    string ans;
    int size = st.size();
    rep(i, 0, size) ans+=st.top(), st.pop();
    reverse(ans.begin(), ans.end());
    cout << ans << endl;

    return 0;
} 