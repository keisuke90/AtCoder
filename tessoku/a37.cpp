#include <bits/stdc++.h>
using namespace std;

long long N, M, B;
long long A[200009], C[200009];
long long total = 0;

int main(){
    cin >> N >> M >> B;

    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < M; i++) cin >> C[i];

    for(int i = 0; i < N; i++) total += A[i] * M;
    for(int i = 0; i < M; i++) total += C[i] * N;
    total += B * N * M;

    cout << total << endl;
} 