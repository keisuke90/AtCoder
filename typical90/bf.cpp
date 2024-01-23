#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int disit_sum(int x) {
    int res = 0;
    while(x > 0) {
        res += x%10;
        x /= 10;
    }
    return res;
}   

int main(){
    int mod = 100000;
    long long n, k;
    cin >> n >> k;
    vector<int> vec(mod);
    rep(i, 0, mod) vec[i] = (i+disit_sum(i))%mod;
    vector<int> route(mod, -1);
    int pos = n, cnt = 0;
    while(route[pos] == -1) {
        route[pos] = cnt;
        pos = vec[pos];
        cnt++;
    }
    int cycle = cnt - route[pos];
    if(k >= route[pos]) {
        k = (k-route[pos])%cycle + route[pos];
    }
    int ans = 0;
    rep(i, 0, mod) {
        if(route[i] == k) {
            ans = i;
        }
    }
    cout << ans << endl;

    return 0;
} 