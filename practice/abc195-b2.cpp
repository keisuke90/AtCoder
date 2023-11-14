#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a, b, w;
    cin >> a >> b >> w;
    w*=1000;
    string s = "UNSATISFIABLE";

    int l=1000000000, r=0;
    rep(i, 1, 1000001) {
        if(a*i <= w && w <= b*i) {
            l = min(l, i);
            r = max(r, i);
        }
    }
    if(r==0) cout << s << endl;
    else cout << l << ' ' << r << endl;

    return 0;
} 