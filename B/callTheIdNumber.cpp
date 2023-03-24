#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<bool> vec(N, true);

  for(int i = 0; i < N; i++){
    int A;
    cin >> A;

    if(vec[i]){
      vec[A - 1] = false;
    }
  }

  int count = 0;
  for(int k = 0; k < N; k++){
    if(vec[k]){
      count++;
    }
  }
  cout << count << endl;
  
  for(int j = 0; j < N; j++){
    if(vec[j]){
      cout << j+1 << " ";
    }
  }
  cout << endl;
} 