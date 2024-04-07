#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> x(n), y(n);
    rep(i, 0, n) {
        cin >> x[i] >> y[i];
    }

    rep(i, 0, n) {
        int pos = -1;
        int dist = -1;
        rep(j, 0, n) {
            if(i == j) continue;
            int d = pow(abs(x[i]-x[j]), 2) + pow(abs(y[i]-y[j]), 2);
            if(d > dist) {
                dist = d;
                pos = j;
            }
        }
        cout << pos+1 << endl;
    }

    return 0;
} 