#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

vector<bool> Eratosthenes(int N) {
    vector<bool> isprime(N+1, true);
    isprime[0] = isprime[1] = false;
    for (int p = 2; p <= N; ++p) {
        if (!isprime[p]) continue;
        for (int q = p * 2; q <= N; q += p) {
            isprime[q] = false;
        }
    }
    return isprime;
}

int main(){
    vector<bool> isprime = Eratosthenes(300);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    rep(i, a, b+1) {
        bool ok = true;
        rep(j, c, d+1) {
            if(isprime[i+j]) {
                ok = false;
                break;
            }
        }
        if(ok) {
            cout << "Takahashi" << endl;
            return 0;
        }
    }
    cout << "Aoki" << endl;
    return 0;
} 