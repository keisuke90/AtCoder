#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    int ans = 0;
    rep(num, 0, 10000){
        vector<int> a(10);
        int x = num;
        rep(i, 0, 4){
            int d = x%10;
            a[d] = 1;
            x /= 10;
        }
        bool ok = true;
        rep(i, 0, 10) {
            if (s[i] == 'o' && a[i] != 1) ok = false;
            if (s[i] == 'x' && a[i] != 0) ok = false;
        }
        if(ok) ans++;
    }
    cout << ans << endl;
    return 0;
} 