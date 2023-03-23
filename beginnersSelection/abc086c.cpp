#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int check = 1;
  int now_x = 0;
  int now_y = 0;
  int now_time = 0;

  for(int i = 0; i < N; i++){
    int total_time, x, y;
    cin >> total_time >> x >> y;
    int distance = abs(x - now_x) + abs(y - now_y);
    int time = total_time - now_time;

    if((distance%2 != time%2) || (time < distance)){
      check = 0;
      break;
    }

    if(now_x > x){
      now_x = x;
    } else {
      now_x = x;
    }
    if(now_y > y){
      now_y = y;
    } else {
      now_y = y;
    }
    now_time = total_time;
  }

  if(check){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
} 

