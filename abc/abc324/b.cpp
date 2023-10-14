#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n;
    cin >> n;
    bool ok = false;
    bool nukeru = false;

    rep(i, 0, 50) {
        rep(j, 0, 50) {
            long long x = pow(2, i);
            long long y = pow(3, j);
            if(x * y > n) {
                bool nukeru = true;
                break;
            }
            if(x * y == n) {
                ok = true;
                nukeru = true;
                break;
            }
        }
        if(nukeru) break;
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
} 