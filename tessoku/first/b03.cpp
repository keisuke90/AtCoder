#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int A[109];
  for(int i = 1; i <= N; i++) cin >> A[i];
  string ans = "No";
  
  for(int i = 1; i <= N; i++){
    for(int j = i+1; j <= N; j++){
      for(int k = j+1; k <= N; k++){
        if(A[i]+A[j]+A[k]==1000) ans = "Yes";
      }
    }
  }
  cout << ans << endl;
} 