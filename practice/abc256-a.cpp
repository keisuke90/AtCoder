#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long ans = 1;
    rep(i, 0, n) {
        ans *= 2;
    }
    cout << ans << endl;
    return 0;
} 