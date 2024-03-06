#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int mod = 998244353;
    string s;
    cin >> s;
    long long ans = 1;
    long long tmp = 0;
    rep(i, 0, s.size()) {
        if(s[i] == '*')  {
            ans *= tmp;
            ans %= mod;
            tmp = 0;
        } else {
            tmp *= 10;
            tmp += s[i] - '0';
            tmp %= mod;
        }
    }
    ans *= tmp;
    ans %= mod;
    cout << ans%mod << endl;
    return 0;
} 