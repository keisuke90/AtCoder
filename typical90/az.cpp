#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    long long mod = 1e9 + 7;
    cin >> n;
    int sum = 0;
    vector<int> vec;
    rep(i, 0, n) {
        sum = 0;
        rep(j, 0, 6) {
            int a;
            cin >> a;
            sum += a;
        }
        vec.push_back(sum);
    }
    long long ans = 1;
    rep(i, 0, n) {
        ans *= vec[i];
        ans%=mod;
    }
    cout << ans << endl;
    return 0;
} 