#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    const int M = 1e6;
    vector<bool> isP(M+1, true);
    vector<int> primes;
    isP[0] = isP[1] = false;
    rep(i, 2, M+1) {
        if(!isP[i]) continue;
        primes.push_back(i);
        for(long long j = (long long)i*i; j<=M; j+= i) {
            isP[j] = false;
        }
    }

    vector<int> s(M+1);
    for(int p : primes) s[p] = 1;
    rep(i, 0, M) s[i+1] += s[i];
    long long n;
    cin >> n;
    long long ans = 0;
    for(int q : primes) {
        long long r = min<long long>(n/q/q/q, q-1);
        ans += s[r];
    }
    cout << ans << endl;
    return 0;
} 