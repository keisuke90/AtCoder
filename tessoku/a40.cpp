#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, A[200009];
    long long cnt[109], ans = 0;
    cin >> N;
    for(int i = 1; i <= N; i++) cin >> A[i];

    for(int i = 1; i <= 100; i++) cnt[i] = 0;
    for(int i = 1; i <= N; i++) cnt[A[i]] += 1;

    for(int i = 1; i <= 100; i++){
        ans += cnt[i] * (cnt[i]-1) * (cnt[i]-2) / 6;
    }

    cout << ans << endl;
}