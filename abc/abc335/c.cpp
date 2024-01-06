#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    deque<pair<int, int>> dq;
    rep(i, 1, n+1) {
        dq.push_back(make_pair(i, 0));
    }

    rep(i, 0, q) {
        int Q;
        cin >> Q;
        if(Q == 1) {
            char c;
            cin >> c;
            if(c == 'R') {
                pair<int, int> next = dq.front();
                next.first += 1;
                dq.push_front(next);
            }
            else if(c=='L') {
                pair<int, int> next = dq.front();
                next.first -= 1;
                dq.push_front(next);
            }
            else if(c=='U') {
                pair<int, int> next = dq.front();
                next.second += 1;
                dq.push_front(next);
            }
            else if(c=='D') {
                pair<int, int> next = dq.front();
                next.second -= 1;
                dq.push_front(next);
            }
        } else {
            int p;
            cin >> p;
            cout << dq[p-1].first << ' ' << dq[p-1].second << endl;
        }
    }

    return 0;
} 