#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    set <char> st;
    map<char, int> mp1, mp2;

    rep(i, 0, s.size()) {
        mp1[s[i]]++;
        mp2[t[i]]++;
        st.insert(s[i]);
        st.insert(t[i]);
    }

    for(auto i : st) {
        if(i == '@') continue;
        if(i != 'a' && i != 't' && i != 'c' && i != 'o' && i != 'd' && i != 'e' && i != 'r') {
            if(mp1[i] != mp2[i]) {
                cout << "No" << endl;
                return 0;
            }
        } else {
            if(mp1[i] == mp2[i]) continue;
            else {
                if(mp1[i] > mp2[i]) {
                    int tmp = mp1[i] - mp2[i];
                    if(mp2['@'] < tmp) {
                        cout << "No" << endl;
                        return 0;
                    } else {
                        mp2['@'] -= tmp;
                    }
                } else {
                    int tmp = mp2[i] - mp1[i];
                    if(mp1['@'] < tmp) {
                        cout << "No" << endl;
                        return 0;
                    } else {
                        mp1['@'] -= tmp;
                    }
                }
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
} 