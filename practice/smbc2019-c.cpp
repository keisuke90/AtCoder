#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
vector<bool> dp(100001);

int main(){
    int x;
    cin >> x;
    vector<int> p = {100, 101, 102, 103, 104, 105};
    dp[0] = true;
    rep(i, 0, 100001) {
        if(dp[i]) {
            rep(j, 0, 6) {
                if(i+p[j] <= 100001) {
                    dp[i+p[j]] = true;
                }
            }
        }
    }
    if(dp[x]) cout << 1 << endl;
    else cout << 0 << endl;

    return 0;
} 