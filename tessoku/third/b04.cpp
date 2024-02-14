#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string n;
    cin >> n;

    int ans = 0;
    rep(i, 0, n.size()) {
        ans += (n[i]-'0') * (1<<(n.size()-i-1));
    }
    cout << ans << endl;
    return 0;
} 