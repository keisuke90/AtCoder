#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    int A[220];

    cin >> N >> K;
    for(int i = 0; i < N; i++) cin >> A[i];

    for(int i = 0; i < K; i++) A[N+i] = 0;
    for(int i = 0; i < N; i++) cout << A[i+K] << " ";
    cout << endl;
} 