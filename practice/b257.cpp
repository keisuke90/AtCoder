#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K, Q;
    cin >> N >> K >> Q;
    int A[209];
    int L;

    for(int i = 1; i <= K; i++) cin >> A[i];
    for(int i = 0; i < Q; i++){
        cin >> L;
        if(A[L] == N) continue;
        else if(L==K) A[L]++;
        else if(A[L]+1 < A[L+1]) A[L]++;
    }

    for(int i = 1; i <= K; i++) cout << A[i] << ' ';
    cout << endl;
} 