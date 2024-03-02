#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    rep(i, 0, n) {
        rep(j, 1, n+1) {
            int a;
            cin >> a;
            if(a == 1) {
                cout << j << ' ';
            }
        }
        cout << endl;
    }

    return 0;
} 