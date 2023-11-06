#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    vector<int> a(5);
    rep(i, 0, 5) cin >> a[i];
    int ans = 1000;
    do {
        int tmp = 0;
        rep(i, 0, 5) {
            if(i < 4 && a[i]%10 != 0) {
                tmp += 10-a[i]%10;
            }
            tmp+=a[i];
        }
        ans = min(ans, tmp);
    } while(next_permutation(a.begin(), a.end()));

    cout << ans << endl;
    return 0;
} 