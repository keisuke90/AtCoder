#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int l=s.size();
  long long res=0,add=26;
  for(int i=1;i<=l-1;i++) {
    res+=add;
    add*=26;
  }
  long long num=0;
  for(int i=0;i<l;i++){
    num*=26;
    num+=(s[i]-'A');
  }
  cout << res+num+1 << endl;
  return 0;
} 