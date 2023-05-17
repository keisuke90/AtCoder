#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int N, X, Y;
    cin >> N >> X >> Y;
    vector<long long> R(N+1), B(N+1);
    R[N] = 1;
    for(int i = N; i >= 2; i--){
        R[i-1] += R[i];
        B[i] += R[i] * X;

        R[i-1] += B[i];
        B[i-1] += B[i] * Y;
    }
    cout << B[1] << endl;

    return 0;
} 