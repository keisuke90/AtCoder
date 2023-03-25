#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  string ans = "No";

  for(int i = 0; i < N; i++){
    string S;
    cin >> S;

    if(S == "and" || S == "not" || S == "that" || S == "the" || S == "you"){
      ans = "Yes";
    }
  }

  cout << ans << endl;
} 