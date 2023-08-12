#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, q;
    string s;
    cin >> n >> s >> q;
    int mode = 0; // 0: normal, 2: lower, 3: upper
    vector<pair<int, string>> vec;

    rep(i, 0, q) {
        int t, x;
        string c;
        cin >> t >> x >> c;
        if(t == 1) {
            s.replace(x-1, 1, c);
            vec.push_back(make_pair(x, c));
        } else if (t == 2) {
            mode = 2;
            vec = {};
        } else if (t == 3) {
            mode = 3;
            vec = {};
        }
    }

    if(mode == 2) {
        rep(i, 0, n) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] - 'A' + 'a';
            }
        }
    } else if (mode == 3) {
        rep(i, 0, n) {
            if(s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - ('a' - 'A');
            }
        }
    }

    rep(i, 0, vec.size()) {
        s.replace(vec[i].first-1, 1, vec[i].second);
    }

    cout << s << endl;
    return 0;
} 