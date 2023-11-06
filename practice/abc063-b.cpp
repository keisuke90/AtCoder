#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    set<char> S;
    rep(i, 0, s.size()) S.insert(s[i]);
    if(S.size() == s.size()) cout << "yes" << endl;
    else cout << "no" << endl;

    return 0;
} 