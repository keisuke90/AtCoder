#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> A(1509, vector<int>(1509, 0));
    rep(i, 0, n) {
        int x, y;
        cin >> x >> y;
        A[x][y]++;
    }

    rep(i, 1, 1509) {
        rep(j, 1, 1509) {
            A[i][j] += A[i][j-1];
        }
    }
    rep(j, 1, 1509) {
        rep(i, 1, 1509) {
            A[i][j] += A[i-1][j]; 
        }
    }

    int q;
    cin >> q;
    rep(i, 0, q) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << A[c][d] - A[c][b-1] - A[a-1][d] + A[a-1][b-1] << ' ';
    }
    cout << endl;
    return 0;
} 