#include <bits/stdc++.h>
using namespace std;

int N, Q, X, A[100009];

int search(int x){
  int pos = lower_bound(A+1, A+N+1, x) - A;
  return pos;
}

int main(){
  cin >> N;
  for(int i = 1; i <= N; i++) cin >> A[i];
  sort(A+1, A+N+1);
  cin >> Q;
  for(int i = 0; i < Q; i++){
    cin >> X;
    int count = search(X);
    cout << count-1 << endl;
  }
} 