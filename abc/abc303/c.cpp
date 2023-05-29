#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m, h, k;
    string s;
    set<pair<int, int>> xy;
    pair<int, int> pos = make_pair(0, 0);
    cin >> n >> m >> h >> k;
    cin >> s;
    rep(i, 0, m) {
        int x, y;
        cin >> x >> y;
        xy.insert(make_pair(x, y));
    }

    rep(i, 0, n) {
        if(h < 1){
            cout << "No" << endl;
            return 0;
        }
        h -= 1;
        if(s[i] == 'R') pos.first += 1;
        if(s[i] == 'L') pos.first -= 1;
        if(s[i] == 'U') pos.second += 1;
        if(s[i] == 'D') pos.second -= 1;
        if(xy.find(pos) != xy.end() && h < k) {
            h = k;
            xy.erase(pos);
        }
    }

    cout << "Yes" << endl;

    return 0;
} 