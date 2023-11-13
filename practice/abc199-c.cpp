#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, q;
    string s;
    cin >> n >> s >> q;

    int t, a, b;
    bool r = false;

    rep(i, 0, q) {
        cin >> t;
        if(t==1) {
            cin >> a >> b;
            a--;
            b--;
            if(r) {
                if(a < n) a+=n;
                else a-=n;
                if(b < n) b+=n;
                else b-=n;
            }

            char aa = s[a];
            char bb = s[b];

            s[a]=bb;
            s[b]=aa;
        } else {
            cin >> a >> b;
            r = !r;
        }
    }

    if(r) {
        string s1 = s.substr(0, n);
        string s2 = s.substr(n, n);
        s = s2+s1;
    }

    cout << s << endl;
    return 0;
} 