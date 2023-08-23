#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<int>> A(h+1, vector<int>(w+1)), B(h+1, vector<int>(w+1));
    rep(i, 1, h+1) {
        rep(j, 1, w+1) {
            cin >> A[i][j];
        }
    }
    rep(i, 1, h+1) {
        rep(j, 1, w+1) {
            cin >> B[i][j];
        }
    }

    long long cnt = 0;
    rep(i, 1, h) {
        rep(j, 1, w) {
            int diff = B[i][j] - A[i][j];
            cnt += abs(diff);
            A[i][j] += diff;
            A[i+1][j] += diff;
            A[i][j+1] += diff;
            A[i+1][j+1] += diff;
        }
    }
    if(A == B) {
        cout << "Yes" << endl;
        cout << cnt << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
} 