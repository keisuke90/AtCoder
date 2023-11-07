#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    rep(i, a, b+1) {
        string s = to_string(i);
        string sr = s;
        reverse(sr.begin(), sr.end());
        if(s == sr) cnt++;
    }
    cout << cnt << endl;
    return 0;
} 