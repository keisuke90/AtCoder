#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  int score = 0;
  vector<int> A(N);

  for(int i = 0; i < N; i++){
    cin >> A[i];
  }

  for(int j = 0; j < M; j++){
    int b;
    cin >> b;

    score += A[b-1];
  }

  cout << score << endl;
}   