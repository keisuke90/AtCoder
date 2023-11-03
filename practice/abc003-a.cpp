#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    double n;
    cin >> n;
    double ans = 0;
    rep(i, 1, n+1) {
        ans += i*10000/n;
    }
    cout << ans << endl;
    return 0;
} 