#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[109];
    rep(i, 0, n) cin >> a[i];
    bool ok = false;
    rep(i, 0, n) {
        rep(j, 0, n) {
            rep(k, 0, n) {
                if(i == j || i == k || j == k) continue;
                if(a[i] + a[j] + a[k] == 1000) {
                    ok = true;
                    break;
                }
            }
        }
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
} 