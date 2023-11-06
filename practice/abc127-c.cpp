#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int ansl = 1;
    int ansr = n; 
    rep(i, 0, m) {
        int l, r;
        cin >> l >> r;
        ansl = max(ansl, l);
        ansr = min(ansr, r);
    }
    if(ansl <= ansr) cout << ansr-ansl+1 << endl;
    else cout << 0 << endl;
    return 0;
} 