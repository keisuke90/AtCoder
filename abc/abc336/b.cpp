#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int n;

string toBinary(int n) {
  if (n == 0) return "0";

  string r;
  while (n != 0) {
    r = (n % 2 == 0 ? "0" : "1") + r;
    n /= 2;
  }
  return r;
}

int ctz(int n) {
    string s = toBinary(n);
    reverse(s.begin(), s.end());

    int cnt = 0;
    rep(i, 0, s.size()) {
        if(s[i]=='0') cnt++;
        else if(s[i]!='0') break;
    }
    

    return cnt;
}

int main(){
    cin >> n;

    cout << ctz(n) << endl;

    return 0;
} 