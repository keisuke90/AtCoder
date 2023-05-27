#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    string s, t;
    cin >> n >> s >> t;
    string ans = "Yes";
    rep(i, 0, n){
        if(s[i] == '1') s[i] = 'l';
        if(s[i] == '0') s[i] = 'o';
        if(t[i] == '1') t[i] = 'l';
        if(t[i] == '0') t[i] = 'o';
    }
    if(s != t) ans = "No";

    cout << ans << endl;
    return 0;
} 
