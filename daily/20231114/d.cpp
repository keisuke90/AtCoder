#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    set<string> st;

    rep(i, 0, s.size()) {
        st.insert(s);
        char c = s.front(); s.erase(s.begin());
        s.push_back(c);
    }

    cout << *st.begin() << endl;
    cout << *st.rbegin() << endl;

    return 0;
} 