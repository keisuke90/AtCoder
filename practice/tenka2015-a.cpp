#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    vector<long long> v(20);
    v[0] = 100;
    v[1] = 100;
    v[2] = 200;
    rep(i, 3, 20) {
        v[i] = v[i-1] + v[i-2] + v[i-3];
    }
    cout << v[19] << endl;
    return 0;
} 