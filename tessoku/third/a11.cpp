#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec[i];
    cout << lower_bound(vec.begin(), vec.end(), x) - vec.begin() + 1 << endl;

    return 0;
} 