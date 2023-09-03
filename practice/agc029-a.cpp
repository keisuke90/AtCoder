#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    long long n = s.size();
    long long ans = 0;
    long long cnt = 0;
    rep(i, 0, n) {
        if(s[i] == 'W') ans += cnt;
        else cnt++;
    }
    cout << ans << endl;
    return 0;
} 