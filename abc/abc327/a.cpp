#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;

    bool flg = false;
    rep(i, 1, n) {
        if((s[i] == 'a' && s[i-1] == 'b') || (s[i] == 'b' && s[i-1] == 'a')) flg = true;
    }
    if(flg) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
} 