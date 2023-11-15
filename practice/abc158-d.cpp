#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    deque<char> S;
    rep(i, 0, s.size()) S.push_back(s[i]);
    int q;
    cin >> q;
    bool r = false;
    rep(i, 0, q) {
        int Q;
        cin >> Q;
        if(Q==1) {
            r = !r;
        } else {
            int f;
            char p;
            cin >> f >> p;
            if(f==1) {
                if(r) {
                    S.push_back(p);
                }else {
                    S.push_front(p);
                }
            } else {
                if(r) {
                    S.push_front(p);
                } else {
                    S.push_back(p);
                }
            }
        }
    }
    string ans;
    for(auto ss : S) {
        ans+=ss;
    }
    if(r) {
        reverse(ans.begin(), ans.end());
    }
    cout << ans << endl;
    return 0;
} 