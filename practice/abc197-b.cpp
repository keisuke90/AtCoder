#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w, x, y;
    cin >> h >> w >> x >> y;
    x--;
    y--;
    vector<string> vec(h);
    rep(i, 0, h) cin >> vec[i];

    int cnt = -3;
    for(int i = x; i < h && vec[i][y] != '#'; i++) cnt++;
    for(int i = x; i >= 0 && vec[i][y] !='#'; i--) cnt++;
    for(int i = y; i < w && vec[x][i] != '#'; i++) cnt++;
    for(int i = y; i >= 0 && vec[x][i] !='#'; i--) cnt++;

    cout << cnt << endl;


    return 0;
} 