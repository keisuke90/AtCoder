#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int d, n;
    cin >> d >> n;
    vector<int> csum(d+1, 0);
    csum[0] = 0;
    rep(i, 0, n){
        int l, r;
        cin >> l >> r;
        csum[l]++;
        csum[r+1]--;
    }
    rep(i, 1, d+1){
        csum[i] += csum[i-1];
    }
    rep(i, 1, d+1){
        cout << csum[i] << endl;
    }
    return 0;
} 