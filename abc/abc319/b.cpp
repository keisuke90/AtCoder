#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << 1;
    rep(i, 1, n + 1) {
        bool flg = true;;
        rep(j, 1, 10) {
            int tmp = 100000000;
            if(n%j == 0) tmp = n/j; 
            if(i % tmp == 0) {
                cout << j;
                flg = false;
                break;
            }
        }
        if(flg) cout << '-';
    }
    cout << endl;
    return 0;
} 