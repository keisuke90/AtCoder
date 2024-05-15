#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    int a;
    cin >> a;
    rep(i, 1, n) {
        int b;
        cin >> b;
        ans = max(ans, b-a+1);
    }
    cout << ans << endl;
    return 0;
} 