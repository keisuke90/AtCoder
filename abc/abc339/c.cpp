#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> vec(n);
    rep(i, 0, n) cin >> vec[i];

    long long min_i = 1e18+9;
    rep(i, 1, n) {
        vec[i] = vec[i] + vec[i-1];
    }

    rep(i, 0, n) {
        if(vec[i] < 0) {
            min_i = min(min_i, vec[i]);
        }
    }

    if(min_i < 0) {
        cout << vec[n-1] - min_i << endl;
    } else {
        cout << vec[n-1] << endl;
    }

    return 0;
} 