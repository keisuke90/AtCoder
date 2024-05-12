#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    int p = -1;
    rep(i, 0, s.size()) {
        if(s[i] == 'a') p = i+1;
    }
    cout << p << endl;

    return 0;
} 