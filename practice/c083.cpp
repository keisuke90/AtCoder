#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long x, y;
    cin >> x >> y;

    long long cnt = 0;
    long long ans = x;
    while(ans <= y) {
        cnt++;
        ans *= 2;
    }

    cout << cnt << endl;
    return 0;
} 