#include <bits/stdc++.h>
using namespace std;


int main(){
  int H, W;
  cin >> H >> W;

  for(int i = 0; i < H; i++){
    string S(W, '.');
    for(int j = 0; j < W; j++){
      int A;
      cin >> A;
      if(A != 0) S[j] = 'A' + A - 1;
    }
    cout << S << "\n";
  }
} 