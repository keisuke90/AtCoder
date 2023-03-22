#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec(N);
  for(int i = 0; i < N; i++) cin >> vec[i];
  sort(vec.begin(), vec.end());

  int count = 1;
  for(int j = 1; j < N; j++){
    if(vec[j-1] < vec[j]){
      count++;
    }
  }
  cout << count << endl;
} 