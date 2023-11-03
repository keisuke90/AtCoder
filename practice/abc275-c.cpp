#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int hm = 0;
    int hi = 0;
    rep(i, 0, n) {
        int h;
        cin >> h;
        if(max(hm, h) == h) {
            hm = h;
            hi = i+1;
        }
    }
    cout << hi << endl;

    return 0;
} 