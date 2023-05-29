#include <bits/stdc++.h>
using namespace std;

int N, X;
int A[200009], B[200009];
string ans = "No";

int search(int x){
  int pos = lower_bound(A, A+N, x) -A;
  if(pos <= N && A[pos] == x) return pos;
  return -1;
}

int main(){
  cin >> N >> X;

  for(int i = 0; i < N; i++) cin >> A[i];
  sort(A, A+N);

  for(int i = 0; i < N; i++) B[i] = A[i] - X;
    
  for(int i = 0; i < N; i++) if(search(B[i]) > -1) ans = "Yes";
  cout << ans << endl;
}