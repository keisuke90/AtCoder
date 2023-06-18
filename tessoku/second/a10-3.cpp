#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, a[100009], d, L[100009], R[100009];
    cin >> n;
    rep(i, 1, n+1) cin >> a[i];
    cin >> d;
    rep(i, 1, n+1) L[i] = max(a[i], L[i-1]);
    for(int i = n; i > 0; i--) R[i] = max(a[i], R[i+1]);
    rep(i, 0, d){
        int l, r;
        cin >> l >> r;
        int ans = max(L[l-1], R[r+1]);
        cout << ans << endl;
    }

    return 0;
} 