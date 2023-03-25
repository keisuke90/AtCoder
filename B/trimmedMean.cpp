#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  double total_score = 0;
  vector<int> vec(5*N);

  for(int i = 0; i < 5*N; i++){
    cin >> vec[i];
  }
  sort(vec.begin(), vec.end());

  for(int i = 0; i < vec.size(); i++){
    if(i>N-1 && i<5*N-N){
      total_score += vec[i];
    }
  }
  cout << total_score / (5*N - 2*N) << endl;
} 