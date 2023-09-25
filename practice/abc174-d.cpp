#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    int w = 0, r = 0;
    rep(i, 0, n) {
        if(s[i] == 'R') r++;
    }
    rep(i, 0, r) {
        if(s[i] == 'W') w++;
    }
    cout << w << endl;
    return 0;
} 