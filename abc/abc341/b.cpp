#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> vec(n);
    rep(i, 0, n) cin >> vec[i];


    rep(i, 0, n-1) {
        long long a, b;
        cin >> a >> b;
        long long cnt = vec[i]/a;
        vec[i+1] += b*cnt;
    }
    cout << vec[n-1] << endl;
    return 0;
} 