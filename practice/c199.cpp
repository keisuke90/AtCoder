#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, q;
    string s;
    cin >> n >> s >> q;
    int t, a, b;
    bool r = false;

    rep(i, 0, q){
        cin >> t >> a >> b;
        if(t == 1) {
            if(r) {
                if(a > n) a -= n;
                else a += n;
                if(b > n) b -= n;
                else b += n;
                swap(s[a-1], s[b-1]);
            }
            else swap(s[a-1], s[b-1]);
        }
        if(t == 2) r = !r;
    }
    if(r) {
        rotate(s.begin(), s.begin()+n, s.end());
        cout << s << endl;
    }
    else cout << s << endl;
    return 0;
} 