#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int t;
    cin >> t;

    rep(i, 0, t) {
        long long T;
        cin >> T;
        long long p=0, q=0;
        for(long long j=2; j*j*j<=T; j++) {
            if(T%j != 0) continue;
            if((T/j) % j == 0) {
                p = j;
                q = T / j / j;
            } else {
                q = j;
                p = (long long)round(sqrt(T/j));
            }
            cout << p << ' ' << q << endl;
            break;
        }
    }

    return 0;
} 