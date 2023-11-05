#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m, c;
    cin >> n >> m >> c;
    vector<int> b(m);
    rep(i, 0, m) cin >> b[i];
    int cnt = 0;
    rep(i, 0, n) {
        int calc = c;
        rep(j, 0, m) {
            int a;
            cin >> a;
            calc+=a*b[j];
        }
        if(calc>0) cnt++;
    }
    cout << cnt << endl;
    return 0;
} 