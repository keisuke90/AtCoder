#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, x;
    while(true) {
        cin >> n >> x;
        if(n == 0 && x == 0) break;

        int cnt = 0;
        rep(i, 1, n+1) {
            rep(j, 1, n+1) {
                if(j == i) continue;
                rep(k, 1, n+1) {
                    if(k==i || k==j) continue;
                    if(i+j+k == x) cnt++;
                }
            }
        }
        cout << cnt/6 << endl;
    }

    return 0;
} 