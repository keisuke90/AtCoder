#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    stack<char> st;

    int cnt = 0;
    rep(i, 0, s.size()) {
        char next = s[i];
        if(st.size() > 0 && s[i] != st.top()) {
            cnt+=2;
            st.pop();
        } else {
            st.push(s[i]);
        }
    }
    cout << cnt << endl;
    return 0;
} 