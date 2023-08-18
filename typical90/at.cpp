#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    vector<int> A(46), B(46), C(46);
    cin >> n;
    rep(i, 0, n) {
        int a;
        cin >> a;
        A[a%46]++;
    }
    rep(i, 0, n) {
        int b;
        cin >> b;
        B[b%46]++;
    }
    rep(i, 0, n) {
        int c;
        cin >> c;
        C[c%46]++;
    }

    long long ans = 0;
    rep(i, 0, 46) {
        rep(j, 0, 46) {
            rep(k, 0, 46) {
                if((i+j+k)%46 == 0) ans += (long long)A[i]*B[j]*C[k];
            }
        }
    }
    cout << ans << endl;
    return 0;
} 