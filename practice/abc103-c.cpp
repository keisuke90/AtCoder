#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    long long ans = 0;
    rep(i, 0, n) {
        int a;
        cin >> a;
        a--;
        ans += a;
    }
    cout << ans << endl;
    return 0;
} 