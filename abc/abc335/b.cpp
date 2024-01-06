#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    rep(i, 0, n+1) {
        rep(j, 0, n+1) {
            rep(k, 0, n+1) {
                if(i+j+k>n) break;
                cout << i << ' ' << j << ' ' << k << endl;
            }
        }
    }

    return 0;
} 