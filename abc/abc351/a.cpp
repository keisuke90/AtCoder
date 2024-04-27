#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int T = 0, A = 0;
    rep(i, 0, 9) {
        int a;
        cin >> a;
        T += a;
    }
    rep(i, 0, 8) {
        int b;
        cin >> b;
        A += b;
    }
    cout << T-A+1 << endl;

    return 0;
} 