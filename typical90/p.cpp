#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n, a, b, c;
    cin >> n >> a >> b >> c;
    long long ans = 10000;
    rep(i, 0, 10000) {
        rep(j, 0, 10000) {
            if(i+j > 9999) break;
            
            long long calc = n - (a*i + b*j);
            if(calc < 0) break;
            if(calc%c == 0) ans = min(ans, calc/c + i + j);
        }
    }
    cout << ans << endl;
    return 0;
} 