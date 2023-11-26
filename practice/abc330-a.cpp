#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, l;
    cin >> n >> l;

    int ans = 0;
    rep(i, 0, n) {
        int a;
        cin >> a;
        if(a >=l) ans++;
    }
    cout << ans << endl;

    return 0;
} 