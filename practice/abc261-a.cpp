#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int ans = max(0, (min(d, b) - max(a, c)));
    cout << ans << endl;
    return 0;
} 