#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    string s;
    cin >> n >> m >> s;
    int ans = 0;
    int logo = 0;
    int muji = m;

    rep(i, 0, n) {
        if(s[i]=='0') {
            muji = m;
            logo = ans;
        } else if (s[i] == '1') {
            if(muji>0) muji--;
            else if(logo>0) logo--;
            else ans++;
        } else if (s[i] == '2') {
            if(logo>0) logo--;
            else ans++;
        }
    }
    cout << ans << endl;
    return 0;
} 