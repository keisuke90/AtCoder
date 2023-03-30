#include <bits/stdc++.h>
using namespace std;
int N;
int X[1509][1509], Z[1509][1509];
int a[100009], b[100009], c[100009], d[100009];

int main(){
  cin >> N;
  for(int i = 1; i <= N; i++){
    cin >> a[i] >> b[i] >> c[i] >> d[i];
    X[a[i]][b[i]] += 1;
    X[c[i]][d[i]] += 1;
    X[c[i]][b[i]] -= 1;
    X[a[i]][d[i]] -= 1;
  }

  for(int i = 0; i <= 1500; i++){
    for(int j = 0; j <= 1500; j++) Z[i][j] = 0;
  }
  for(int i = 1; i <= 1500; i++){
    for(int j = 1; j <= 1500; j++) Z[i][j] = Z[i][j-1] + X[i][j];
  }
  for(int i = 1; i <= 1500; i++){
    for(int j = 1; j <= 1500; j++) Z[i][j] += Z[i-1][j];
  }

  int count = 0;
  for(int i = 0; i <= 1500; i++){
    for(int j = 0; j <= 1500; j++){
      if(Z[i][j] >= 1){
        count++;
      }
    }
  }
  cout << count << endl;

} 