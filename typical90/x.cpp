#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    long long a[1009], b[1009];
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];

    rep(i, 0, n) k -= abs(a[i]-b[i]);
    if(k >= 0 && k%2 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
} 