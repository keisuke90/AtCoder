#include <bits/stdc++.h>
using namespace std;

long long N, A[200009];
long long cnt[109];
long long ans = 0;

int main(){
    cin >> N;
    for(int i = 1; i <= N; i++) cin >> A[i];

    for(int i = 0; i <100; i++) cnt[i] = 0;
    for(int i = 1; i <= N; i++) cnt[A[i]%100] += 1;

    for(int i = 1; i < 50; i++) ans += cnt[i] * cnt[100-i];
    ans += cnt[0] * (cnt[0]-1LL) / 2LL;
    ans += cnt[50] & (cnt[50]-1LL) / 2LL;

    cout << ans << endl;
} 