#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[109][109], b[109][109];
    rep(i, 0, n) {
        string s;
        cin >> s;
        rep(j, 0, n) {
            a[i][j] = s[j] - '0';
        }
    }

    rep(i, 0, n) {
        rep(j, 0, n) {
            if(i == 0) {
                if(j == 0) {
                    b[i][j] = a[i+1][j];
                    continue;
                }
                b[i][j] = a[i][j-1];
                continue;
            }
            if(i == n-1) {
                if(j == n-1){
                    b[i][j] = a[i-1][j];
                    continue;
                }
                b[i][j] = a[i][j+1];
                continue;
            }
            if(i != 0 && i != n-1) {
                if(j == 0) {
                    b[i][j] = a[i+1][j];
                    continue;
                }
                if(j == n-1) {
                    b[i][j] = a[i-1][j];
                    continue;
                }
                b[i][j] = a[i][j];
            }
        }
    }

    rep(i, 0, n) {
        rep(j, 0, n) {
            cout << b[i][j];
        }
        cout << endl;
    }

    return 0;
} 