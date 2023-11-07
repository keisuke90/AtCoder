#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;

    rep(i, 0, h+2) {
        rep(j, 0, w+2) {
            if(i == 0 || i == h+1) {
                cout << '#';
                continue;
            } else if (j == 0 || j == w+1) {
                cout << '#';
                continue;
            } else {
                char a;
                cin >> a;
                cout << a;
            }
        }
        cout << endl;
    }

    return 0;
} 