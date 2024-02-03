#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<char>> vec(h, vector<char>(w, '.'));

    vector<pair<int, int>> route = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

    int now = 0;
    pair<int, int> pos = {0, 0};
    rep(i, 0, n) {
        if(vec[pos.first][pos.second] == '.') {
            vec[pos.first][pos.second] = '#';
            now = (now+4 + 1) % 4;
            int dy = (pos.first + route[now].first) % h;
            int dx = (pos.second + route[now].second) % w;
            if(dy < 0) dy+=h;
            if(dx < 0) dx+=w;
            pos = {dy, dx};
        } else {
            vec[pos.first][pos.second] = '.';
            now = (now+4 - 1) % 4;
            int dy = (pos.first + route[now].first) % h;
            int dx = (pos.second + route[now].second) % w;
            if(dy < 0) dy+=h;
            if(dx < 0) dx+=w;
            pos = {dy, dx};
        }
    }

    rep(i, 0, h) {
        rep(j, 0, w) {
            cout << vec[i][j];
        }
        cout << endl;
    }


    return 0;
} 