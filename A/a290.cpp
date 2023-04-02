#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M, B;
  int A[109];
  int ans = 0;

  cin >> N >> M;
  for(int i = 1; i <= N; i++) cin >> A[i];
  for(int i = 0; i < M; i++){
    cin >> B;
    ans += A[B];
  }

  cout << ans << endl;
} 