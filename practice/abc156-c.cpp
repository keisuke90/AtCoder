#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec[i];

    long long ans = 1000000000000000000;
    rep(i, 1, 101) {
        long long tmp = 0;
        rep(j, 0, n) {
            tmp += pow(vec[j]-i, 2);
        }
        ans = min(ans, tmp);
    }
    cout << ans << endl;
    return 0;
} 