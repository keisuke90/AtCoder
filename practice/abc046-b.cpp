#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    long long ans = k;
    rep(i, 0, n-1) ans*=(k-1);
    cout << ans << endl;

    return 0;
} 