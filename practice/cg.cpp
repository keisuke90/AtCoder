#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;


vector<long long> divisor(long long n) {
    vector<long long> ret;
    for(long long i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            ret.push_back(i);
            if(i*i != n) ret.push_back(n/i);
        };
    }
    sort(ret.begin(), ret.end());
    return ret;
}

int main(){
    long long k;
    cin >> k;
    vector<long long> vec = divisor(k);

    long long ans = 0;
    rep(i, 0, vec.size()) {
        rep(j, i, vec.size()) {
            long long a = vec[i];
            long long b = vec[j];
            if((k / a) < b) continue;
            if(k % (a*b) != 0) continue;
            long long c = k / (a * b);
            if(b <= c) ans++;
        }
    }

    cout << ans << endl;
    return 0;
} 