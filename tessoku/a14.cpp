#include <bits/stdc++.h>
using namespace std;

int N, K;
int A[1009], B[1009], C[1009], D[1009];
int P[1000009], Q[1000009];

int main(){
    cin >> N >> K;
    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < N; i++) cin >> B[i];
    for(int i = 0; i < N; i++) cin >> C[i];
    for(int i = 0; i < N; i++) cin >> D[i];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            P[i*N+j] = A[i] + B[j];
            Q[i*N+j] = C[i] + D[j];
        }
    }

    sort(Q, Q+N*N);

    for(int i = 0; i < N*N; i++) {
        int pos1 = lower_bound(Q, Q+N*N, K-P[i]) - Q;
        if(pos1 <= N*N && Q[pos1] == K-P[i]){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
} 