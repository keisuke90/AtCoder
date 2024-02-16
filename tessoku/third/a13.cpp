#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec[i];

    long long sum = 0;
    rep(i, 0, n-1) {
        int tgt = vec[i]+k;
        int a = upper_bound(vec.begin(), vec.end(), tgt) - vec.begin();
        sum += (a - (i+1));
    }
    cout << sum << endl;
    return 0;
} 