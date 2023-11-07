#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int m = 1000000000;
    int cnt = 0;
    rep(i, 1, n+1) {
        int p;
        cin >> p;
        m = min(m, p);
        if(p == m) cnt++;
    }
    cout << cnt << endl;
    return 0;
} 