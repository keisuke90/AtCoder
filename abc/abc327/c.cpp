#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    vector<vector<int>> vec(9, vector<int>(9));

    rep(i, 0, 9) {
        rep(j, 0, 9) {
            cin >> vec[i][j];
        }
    }

    bool ok = true;
    rep(i, 0, 9) {
        set<int> s;
        rep(j, 0, 9) {
            s.insert(vec[i][j]);
        }
        if(s.size() != 9) {
            cout << "No" << endl;
            return 0;
        }
    }

    rep(i, 0, 9) {
        set<int> s;
        rep(j, 0, 9) {
            s.insert(vec[j][i]);
        }
        if(s.size() != 9) {
            cout << "No" << endl;
            return 0;
        }
    }

    rep(i, 0, 3) {
        rep(j, 0, 3) {
            set<int> s;
            rep(k, i*3, i*3+3) {
                rep(l, j*3, j*3+3) {
                    s.insert(vec[k][l]);
                }
            }
            if(s.size() != 9) {
                cout << "No" << endl;
                return 0;
            }
        }
    }


    cout << "Yes" << endl;
    return 0;
} 