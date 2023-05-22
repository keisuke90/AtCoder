#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> N(n), p(n), q(n);
    rep(i, 0, n) N[i] = i+1;
    rep(i, 0, n) cin >> p[i];
    rep(i, 0, n) cin >> q[i];
    int cnt = 1, a = 0, b = 0;

    do {
        bool ok = true;
        rep(i, 0, n) if(N[i] != p[i]) ok = false;
        if(ok) a = cnt;

        ok = true;
        rep(i, 0, n) if(N[i] != q[i]) ok = false;
        if(ok) b = cnt;

        cnt++;
    }while(next_permutation(N.begin(), N.end()));

    cout << abs(a-b) << endl;

    return 0;
} 