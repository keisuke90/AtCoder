#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, l;
    cin >> n >> l;
    long long mod = 1e9+7;
    vector<int> vec(n+1, 0);
    vec[0] = 1;
    rep(i, 1, n+1) {
        if(i < l) vec[i] = vec[i - 1];
        else vec[i] = (vec[i - 1] + vec[i - l]) % mod;
    }
    cout << vec[n] << endl;
    return 0;
} 