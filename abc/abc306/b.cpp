#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a[70];
    rep(i, 0, 64) cin >> a[i];
    unsigned long long ans = 0;

    rep(i, 0, 64){
        if(a[i]) ans = ans | (1LL << i);
    }
    cout << ans << endl;
    return 0;
} 