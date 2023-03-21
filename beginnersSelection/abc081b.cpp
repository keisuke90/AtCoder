#include <bits/stdc++.h>
using namespace std;

int main(){
  int isEven = 1;
  int count = 0;
  int N;
  cin >> N;

  vector<int> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec[i];
  }

  while(isEven){
    for(int j = 0; j < N; j++){
      if(vec[j] % 2 == 1){
        isEven = 0; 
        break;
      } else {
        vec[j] /= 2;
        if(j == N - 1) count++;
      }
    }
  }

  cout << count << endl;
} 