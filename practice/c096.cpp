#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    string s[h];
    rep(i, 0, h) cin >> s[i];
    string ans = "Yes";
    rep(i, 0, h) {
        rep(j, 0, w){
            if(i-1 < 0 || i+1 >= h || j-1 < 0 || j+1 >= w) continue;
            if(s[i][j] == '#' && s[i-1][j] == '.' && s[i][j+1] == '.' && s[i+1][j] == '.' && s[i][j-1] == '.'){
                ans = "No";
                break;
            }
        }
    }

    cout << ans << endl;
    return 0;
} 