#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int q;
    cin >> q;
    queue<pair<long long, long long>> qu;

    rep(i, 0, q) {
        int Q;
        cin >> Q;
        if(Q == 1) {
            long long x, c;
            cin >> x >> c;
            qu.push({x, c});
        }else if(Q == 2) {
            long long c;
            cin >> c;
            long long sum = 0;
            while(true) {
                if(qu.front().second >= c) {
                    sum += qu.front().first * c;
                    qu.front().second -= c;
                    if(qu.front().second == 0) qu.pop();
                    break;
                } else {
                    sum += qu.front().first * qu.front().second;
                    c -= qu.front().second;
                    qu.pop();
                }
            }
            cout << sum << endl;
        }
    }

    return 0;
} 