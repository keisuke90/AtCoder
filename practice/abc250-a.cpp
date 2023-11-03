#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w, r, c;
    cin>>h>>w>>r>>c;
    int ans = 4;
    if(r == 1) ans--;
    if(r == h) ans--;
    if(c == 1) ans--;
    if(c == w) ans--;

    cout << ans << endl;

    return 0;
} 