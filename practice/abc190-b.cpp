#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n, s, d;
    cin >> n >> s >> d;
    bool ok = false;
    rep(i, 0, n) {
        long long x, y;
        cin >> x >> y;
        if(x < s && y > d) ok = true;
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
} 