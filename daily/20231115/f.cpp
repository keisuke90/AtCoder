#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long ans = 0;
    for(long long i = 1; i*i*i<=n; i++) {
        for(long long j = i; i*j*j<=n; j++) {
            ans+=n/i/j-j+1;
        }
    }
    cout << ans << endl;
    return 0;
} 