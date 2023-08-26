#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, h, x;
    int p[1000];
    cin >> n >> h >> x;
    rep(i, 0, n) {
        cin >> p[i];
    }

    rep(i, 0, n) {
        if(p[i] + h >= x) {
            cout << i + 1 << endl;
            break;
        }
    }


    return 0;
}