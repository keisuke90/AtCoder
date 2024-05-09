#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;

    int T = 0, A = 0;
    rep(i, 0, x) {
        if(i%(a+c) < a) T += b;
        if(i%(d+f) < d) A += e;
    }

    if(T == A) cout << "Draw" << endl;
    else if (T > A) cout << "Takahashi" << endl;
    else cout << "Aoki" << endl;

    return 0;
} 