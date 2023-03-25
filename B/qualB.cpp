#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  string S;
  cin >> N >> K >> S;
  int count = 0;

  for(int i = 0; i < N; i++){
    if(S[i] == 'o'){
      if(count < K){
        count++;
      }else{
        S[i] = 'x';
      }
    
    }
  }

  cout << S << endl;
} 