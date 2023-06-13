#include <bits/stdc++.h>
using namespace std;

// int main(){
//   int D, N;
//   cin >> D >> N;
//   vector<int> A(1000000, 0);
//   A[0] = 0;
//   for(int i = 0; i < N; i++){
//     int L, R;
//     cin >> L >> R;
//     for(int j = L; j <= R; j++){
//       A[j] += 1;
//     }
//   }

//   for(int i = 1; i <= D; i++){
//     cout << A[i] << endl;
//   }
// } 

int main(){
  int N, L[100009], R[100009];
  int D, B[100009];
  int Answer[100009];

  cin >> D >> N;
  for(int i = 1; i <= N; i++) cin >> L[i] >> R[i];

  for(int i = 1; i <= N; i++){
    B[L[i]] += 1;
    B[R[i] + 1] -= 1;
  }

  Answer[0] = 0;
  for(int i = 1; i <= D; i++) Answer[i] = Answer[i-1] +B[i];
  for(int j = 1; j <= D; j++) cout << Answer[j] << endl;
}