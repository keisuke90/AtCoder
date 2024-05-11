// #include <bits/stdc++.h>
// #define rep(i, start, end) for(int i = start; i < end; i++)
// using namespace std;

// int main(){
//     const long long mod = 998244353;
//     long long a, b, c, d, e, f;
//     cin >> a >> b >> c >> d >> e >> f;
//     int res1 = (a*b*c)%mod;
//     int res2 = (d*e*f)%mod;
//     cout << (res1-res2)%mod << endl;

//     return 0;
// } 

#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

int main() {
    long long a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    long long res1 = a % MOD;
    res1 = (res1 * (b % MOD)) % MOD;
    res1 = (res1 * (c % MOD)) % MOD;

    long long res2 = d % MOD;
    res2 = (res2 * (e % MOD)) % MOD;
    res2 = (res2 * (f % MOD)) % MOD;

    long long result = (res1 - res2) % MOD;
    if (result < 0) {
        result += MOD;
    }

    cout << result << endl;

    return 0;
}
