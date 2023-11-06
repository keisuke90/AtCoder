#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    int x = 0;
    rep(i, 0, n) {
        if(s[i] == 'I') {
            x++;
            ans = max(ans,x);
        } else {
            x--;
        }
    }
    cout << ans << endl;

    return 0;
} 