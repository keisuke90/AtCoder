#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, Q;
  cin >> N >> Q;
  vector<int> vec(N, 0);

  for(int i = 0; i < Q; i++){
    int E, X;
    cin >> E >> X;

    if(E == 1){
      vec[X-1]++;
    }else if(E == 2){
      vec[X-1] += 2;
    }else{
      if(vec[X-1] >= 2){
        cout << "Yes" << endl;
      }else{
        cout << "No" << endl;
      }
    }
  }
} 