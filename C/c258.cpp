#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, q;
    string s;
    int rotate = 0;
    int l, r;
    cin >> n >> q >> s;
    rep(i, 0, q){
        cin >> l >> r;
        if(l == 1) rotate = (rotate-r+n) % n;
        if(l == 2) {
            cout << s[(rotate+r-1)%n] << endl;
        }
    }

    return 0;
} 