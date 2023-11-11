#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    long long p = 1;
    int mod = 1000000007;

    rep(i, 1, n+1) {
        p*=i;
        p%=mod;
    }
    cout << p << endl;
    return 0;
} 