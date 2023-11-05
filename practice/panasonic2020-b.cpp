#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long h, w;
    cin >> h >> w;
    if(h == 1 || w == 1) {
        cout << 1 << endl;
    } else if (w%2==0) {
        cout << h*w/2 << endl;
    } else {
        w = w/2+1;
        cout << h*w - h/2 << endl;
    }

    return 0;
} 