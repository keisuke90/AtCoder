#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;
    int tx = x, ax = 0;

    int cnt = 0;
    int T = 0;
    rep(i, 0, x) {
        if(cnt >= a) {
            cnt++;
            if(cnt == a+c) cnt = 0;
            continue;
        }
        T+=b;
        cnt++;
    }

    cnt = 0;
    int A = 0;
    rep(i, 0, x) {
        if(cnt >= d) {
            cnt++;
            if(cnt == d+f) cnt = 0;
            continue;
        }
        A+=e;
        cnt++;
    }

    if(T==A) cout << "Draw" << endl;
    else if (T>A) cout << "Takahashi" << endl;
    else cout << "Aoki" << endl;
    return 0;
} 