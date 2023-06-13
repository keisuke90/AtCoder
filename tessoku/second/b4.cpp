#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string n;
    cin >> n;

    int ans = 0;
    rep(i, 0, n.size()) {
        int tmp = pow(2, i);
        ans += (n[n.size() - i - 1] - '0') * tmp;
    }

    cout << ans << endl;
    return 0;
} 