#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int dx = x2 - x1;
    int dy = y2 - y1;
    int x = x2;
    int y = y2;

    rep(i, 0, 2) {
        int _dx = -dy;
        int _dy = dx;
        dx = _dx;
        dy = _dy;

        x+=dx;
        y+=dy;

        cout << x << ' ' << y;
        if(i == 0) cout << ' ';
        else cout << endl;
    }
    return 0;
} 