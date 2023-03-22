#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec[i];
  }
  sort(vec.rbegin(), vec.rend());

  int a = 0;
  int b = 0;

  for(int j = 0; j < vec.size(); j++){
    if(j % 2 == 0){
      a += vec[j];
    } else {
      b += vec[j];
    }
  }
  int diff = a - b;
  cout << diff << endl;
} 