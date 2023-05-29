#include <bits/stdc++.h>
using namespace std;

string S;
int tate, yoko;
char c;

int main(){
  for(int i = 8; i > 0; i--){
    cin >> S;
    for(int j = 0; j < 8; j++){
      if(S[j] == '*'){
        yoko = j+1;
        tate = i;
      }
    }
  }

  switch (yoko) {
    case 1:
      c = 'a';
      break;
    case 2:
      c = 'b';
      break;
    case 3:
      c = 'c';
      break;
    case 4:
      c = 'd';
      break;
    case 5:
      c = 'e';
      break;
    case 6:
      c = 'f';
      break;
    case 7:
      c = 'g';
      break;
    case 8:
      c = 'h';
      break;
  }

  cout << c + to_string(tate) << endl;

} 