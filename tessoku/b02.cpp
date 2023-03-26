#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;
  string ans = "No";

  for(int i = A; i <= B; i++){
    if(100%i==0){
      ans = "Yes";
      break;
    }
  }
  cout << ans << endl;
} 