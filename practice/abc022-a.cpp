#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, s, t, w;
    cin >> n >> s >> t >> w;
    int cnt = 0;
    if(w >= s && w <= t) cnt++;
    rep(i, 0, n-1) {
        int a;
        cin >> a;
        w += a;
        if(w >= s && w <= t) cnt++;
    }
    cout << cnt << endl;
    return 0;
} 