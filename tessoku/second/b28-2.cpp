#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
const int mod = 1000000007;
int n, a[10000009];

int main(){
    int n;
    cin >> n;
    a[1] = 1;
    a[2] = 1;
    rep(i, 3, n+1) {
        a[i] = (a[i-1]+a[i-2])%mod;
    }
    cout << a[n] << endl;
    return 0;
} 