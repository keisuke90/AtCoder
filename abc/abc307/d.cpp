#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    bool flag = false;
    stack<char> st;
    rep(i, 0, n) {
        if(flag) {
            if(s[i] == ')'){
                while(st.top() != '(') {
                    st.pop();
                }
                st.pop();
                if(st.empty()) flag = false;
            } else {
                st.push(s[i]);
            }
        } else {
            if(s[i] == '('){
                flag = true;
                st.push(s[i]);
            } else {
                cout << s[i];
            }
        }
    }
    stack<char> ans;
    while(!st.empty()) {
        ans.push(st.top());
        st.pop();
    }
    while(!ans.empty()) {
        cout << ans.top();
        ans.pop();
    }
    cout << endl;
    return 0;
} 