#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int t, n;
    cin >> t >> n;
    vector<int> sum(t+1, 0);
    rep(i, 0, n){
        int l, r;
        cin >> l >> r;
        sum[l]++;
        sum[r]--;
    }
    rep(i, 1, t+1){
        sum[i] += sum[i-1];
    }
    rep(i, 0, t){
        cout << sum[i] << endl;
    }

    return 0;
} 