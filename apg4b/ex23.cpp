#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++){
    cin >> A.at(i);
  }

  map<int, int> m;
  for(int x : A){
    if(m.count(x)){
      m.at(x)++;
    } else {
      m[x] = 1;
    }
  }

  int max_cnt = 0;
  int ans = -1;

  for(int x : A){
    if (max_cnt < m.at(x)){
      max_cnt = m.at(x);
      ans = x;
    } 
  }

  cout << ans << " " << max_cnt << endl;
} 