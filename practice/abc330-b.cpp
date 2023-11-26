#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, l, r;
    cin >> n >> l >> r;

    rep(i, 0, n) {
        int a;
        cin >> a;
        if(a > r) {
            cout << r << endl;
        } else if (a < l) {
            cout << l << endl;
        } else {
            cout << a << endl;
        }
    }

    return 0;
} 