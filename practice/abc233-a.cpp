#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    int ans =0;
    while(x < y) {
        x+=10;
        ans++;
    }
    cout << ans << endl;
    return 0;
} 