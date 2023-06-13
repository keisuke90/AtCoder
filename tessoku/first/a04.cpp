#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  for(int x = 9; x >= 0; x--){
    int d = (1<<x);
    cout << (N / d) % 2;
  }
  cout << endl;
} 