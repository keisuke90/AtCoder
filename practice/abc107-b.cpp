#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<char>> vec(h, vector<char>(w));
    vector<bool> row(h, false);
    vector<bool> col(w, false);
    rep(i, 0, h) {
        string s;
        cin >> s;
        rep(j, 0, s.size()) {
            vec[i][j] = s[j];
        }
    }

    rep(i, 0, h) {
        rep(j, 0, w) {
            if(vec[i][j] == '#') {
                row[i] = true;
                col[j] = true;
            }
        }
    }


    rep(i, 0, h) {
        if(!row[i]) continue;
        rep(j, 0, w) {
            if(!col[j]) continue;
            cout << vec[i][j];
        }
        cout << endl;
    }
    return 0;
} 