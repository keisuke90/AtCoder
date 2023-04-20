#include <bits/stdc++.h>
using namespace std;

int N, M;
int A[100009], B[100009], C[200009];

int main(){
    cin >> N >> M;

    for(int i = 0; i < N; i++) {
        cin >> A[i];
        C[i] = A[i];
    }
    for(int i = 0; i < M; i++) {
        cin >> B[i];
        C[i+N] = B[i];
    }

    sort(C, C+N+M);

    for(int i = 0; i < N; i++){
        int found = lower_bound(C, C+N+M, A[i]) - C + 1;
        cout << found << ' ';
    }
    cout << endl;
    for(int i = 0; i < M; i++){
        int found = lower_bound(C, C+N+M, B[i]) - C + 1;
        cout << found << ' ';
    }
    cout << endl;
} 