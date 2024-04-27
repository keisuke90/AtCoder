#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<char>> vec1(n, vector<char>(n)), vec2(n, vector<char>(n));

    rep(i, 0, n) {
        rep(j, 0, n) cin >> vec1[i][j];
    }
    rep(i, 0, n) {
        rep(j, 0, n) cin >> vec2[i][j];
    }

    rep(i, 0, n) {
        rep(j, 0, n) {
            if(vec1[i][j] != vec2[i][j]) {
                cout << i+1 << ' ' << j+1 << endl;
            }
        }
    }

    return 0;
} 