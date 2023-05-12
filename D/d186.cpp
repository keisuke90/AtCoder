#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int N;
    int A[200009];
    long long sum = 0;
    long long ans = 0;

    cin >> N;
    rep(i, 0, N) cin >> A[i];
    sort(A, A+N);

    rep(i, 0, N){
        ans += (long long)A[i]*i;
        ans -= sum;
        sum += A[i];
    }

    cout << ans << endl;

    return 0;
} 