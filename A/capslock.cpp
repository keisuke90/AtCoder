#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;

  string T = "";

  for(int i = 0; i < S.size(); i++){
    T += toupper(S[i]);
  }

  cout << T << endl;
}