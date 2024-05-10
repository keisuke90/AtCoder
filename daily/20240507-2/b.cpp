#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    int cnt = 0, sum = x;
    while(sum < y) {
        sum+=10;
        cnt++;
    }
    cout << cnt << endl;

    return 0;
} 