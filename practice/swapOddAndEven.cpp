#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;

  for(int i = 0; i < S.size(); i++){
    if(i % 2 == 1){
      cout << S[i-1];
    } else {
      cout << S[i+1];
    }
  }
} 