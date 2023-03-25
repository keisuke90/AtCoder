#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  map<int, int> mp;

  for(int i = 0; i < N; i++){
    int a;
    cin >> a;
    mp[a]++;
  }

  int ans = 0;
  for(auto [key, value]: mp) ans += value/2;
  cout << ans << endl;
} 