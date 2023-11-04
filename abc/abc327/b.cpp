#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main() {
    long long b;
    cin >> b;

    rep(i, 1, 17) {
        long long res = 1;
        rep(j, 0, i) {
            res *= i;
            if(res > b) break;
        }
        if(res == b) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
