#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, A[1000000];
  cin >> N;
  int total = 0;
  A[0] = 0;
  for(int i = 1; i <= N; i++){
    int a;
    cin >> a;
    total += a;
    A[i] = total;
  }

  int Q;
  cin >> Q;

  string ans;

  for(int i = 0; i < Q; i++){
    int L, R;
    cin >> L >> R;
    int lose = (R-L+1) - (A[R]-A[L-1]);
    int win = A[R]-A[L-1];
    

    if(win > lose){
      cout << "win" << endl;
    }else if(win == lose){
      cout << "draw" << endl;
    }else{
      cout << "lose" << endl;
    }
  }
} 