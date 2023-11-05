#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int m = 0;
    int ans = 0;
    rep(i, 1, n+1) {
        int t = i;
        int cnt = 0;
        while(t%2==0){
            t/=2;
            cnt++;
            if(t==0) break;
        }
        m=max(m, cnt);
        if(m == cnt) ans = i;
    }
    cout << ans << endl;
    return 0;
} 