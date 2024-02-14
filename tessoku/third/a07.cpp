#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int d, n;
    vector<int> vec(100009);
    cin >> d >> n;

    rep(i, 0, n) {
        int l, r;
        cin >> l >> r;
        vec[l]++;
        vec[r+1]--;
    }

    rep(i, 1, d+1) {
        vec[i] += vec[i-1];
    }

    rep(i, 1, d+1) {
        cout << vec[i] << endl;
    }

    return 0;
} 