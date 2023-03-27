#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, Q, A[1000000];
  cin >> N >> Q;
  int total = 0;

  A[0] = 0;
  for(int i = 1; i <= N; i++){
    int a;
    cin >> a;
    total += a;
    A[i] = total;
  }

  for(int i = 0; i < Q; i++){
    int L, R;
    cin >> L >> R;
    cout << A[R] - A[L-1] << endl; 
  }
} 