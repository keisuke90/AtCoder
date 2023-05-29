#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  string S;
  bool A = true;
  bool B = true;

  cin >> N >> S;
  char a = S[0];
  char b = S[1];

  for(int i = 0; i < N; i++){
    if(i%2==0){
      if(a != S[i]) A = false;
    }else{
      if(b != S[i]) B = false;
    }
  }

  if(A && B){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
} 