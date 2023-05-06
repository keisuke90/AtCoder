// #include <bits/stdc++.h>
// using namespace std;

// long long N, K, X;
// long long A[200009];

// int main(){

//     cin >> N >> K >> X;
//     for(int i = 0; i < N; i++){
//         cin >> A[i];
//     }

//     for(int i = 0; i < N; i++){
//         if(K == 0) break;
//         while(A[i] >= X){
//             if(K == 0) break;
//             A[i] -= X;
//             K--;
//         }
//     }
//     sort(A, A+N, greater<int>());
//     for(int i = 0; i < N; i++){
//         if(K == 0) break;
//         if(A[i] == 0) continue;
//         A[i] = 0;
//         K--;
//     }
//     // Aの合計を出力
//     int ans = 0;
//     for(int i = 0; i < N; i++){
//         ans += A[i];
//     }
//     cout << ans << endl;
// } 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K, X;
    cin >> N >> K >> X;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];
    vector<int> mod(N);
    long long Q = 0;
    long long ans = 0;
    for(int i = 0; i < N; i++){
        mod[i] = A[i]%X;
        Q += A[i]/X;
        ans += A[i];
    }
    if(Q >= K) {
        ans -= (long long)X*K;
    } else {
        ans -= Q*X;
        K -= Q;
        K = min(K, N);
        sort(mod.rbegin(), mod.rend());
        for(int i = 0; i < K; i++) ans -= mod[i];
    }
    cout << ans << endl;
}
