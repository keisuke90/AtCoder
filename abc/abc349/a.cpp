#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    rep(i, 0, n-1) {
        int a;
        cin >> a;
        ans += a;
    }

    cout << ans * -1 << endl;
    return 0;
} 