#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  int count = 0;


  for(int i = 1; i <= N; i++){
    for(int j = 1; j <= N; j++){
      int z = K -i -j;
      if(z >= 1 && z <= N) count++;
    }
  }
  cout << count << endl;
} 