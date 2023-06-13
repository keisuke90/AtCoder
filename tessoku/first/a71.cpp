#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int A[70], B[70];
    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < N; i++) cin >> B[i];

    sort(A, A+N);
    sort(B, B+N, greater<int>());


    int ans = 0;
    for(int i = 0; i < N; i++) ans += A[i] * B[i];
    cout << ans << endl;

    return 0;
} 