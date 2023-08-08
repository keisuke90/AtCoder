#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w, tate, yoko;
    cin >> h >> w;

    tate = (h+1)/2;
    yoko = (w+1)/2;

    if(h == 1 || w == 1) cout << h * w << endl;
    else cout << tate * yoko << endl;

    return 0;
} 