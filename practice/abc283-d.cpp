#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    stack<char> st;
    map<char, int> mp;
    

    rep(i, 0, s.size()) {
        if(s[i] == '(') st.push(s[i]);
        else if (s[i] == ')') {
            bool flg = true;
            while(flg) {
                if(st.top() == '(') {
                    st.pop();
                    flg = false;
                } else {
                    mp[st.top()] = 0;
                    st.pop();
                }
            }
        } else {
            if(mp[s[i]] == 1) {
                cout << "No" << endl;
                return 0;
            } else {
                st.push(s[i]);
                mp[s[i]] = 1;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
} 