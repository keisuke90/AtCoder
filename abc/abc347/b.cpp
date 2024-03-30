#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;

    set<string> st;
    rep(i, 0, s.size()) {
        rep(j, 1, s.size()+1-i) {
            st.insert(s.substr(i, j));
        }
    }
    cout << st.size() << endl;
    return 0;
} 