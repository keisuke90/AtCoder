#include <bits/stdc++.h>
using namespace std;

int H, W, N;
int a[100009], b[100009], c[100009], d[100009];
int x[1509][1509], ans[1509][1509];

int main(){
  cin >> H >> W >> N;

  for(int i = 1; i <= N; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];

  for(int i = 1; i <= N; i++){
    x[a[i]][b[i]] += 1;
    x[c[i]+1][d[i]+1] += 1;
    x[c[i]+1][b[i]] -= 1;
    x[a[i]][d[i]+1] -= 1;
  }

  // 累積和の計算
  for(int i = 0; i <= H; i++){
    for(int j = 0; j <= W; j++) ans[i][j] = 0;
  }
  for(int i = 1; i <= H; i++){
    for(int j = 1; j <= W; j++) ans[i][j] = ans[i][j-1] + x[i][j];
  }
  for(int i = 1; i <= H; i++){
    for(int j = 1; j <= W; j++) ans[i][j] = ans[i-1][j] + ans[i][j];
  }

  // 出力
  for(int i = 1; i <= H; i++){
    for(int j = 1; j <= W; j++){
      if(j >= 2) cout << " ";
      cout << ans[i][j];
    }
    cout << endl;
  }
} 