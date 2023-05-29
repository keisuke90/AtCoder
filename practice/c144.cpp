#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin >> N;
    long long ans = 1e18;
    for(long long i = 1; i * i <= N; i++){
        if(N % i != 0) continue;
        long long j = N/i;
        ans = min(ans, i+j-2);
    }
    cout << ans << endl;
} 