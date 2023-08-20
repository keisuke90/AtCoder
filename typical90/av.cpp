#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> vec(400009);
    rep(i, 0, n) {
        int a, b;
        cin >> a >> b;
        vec.push_back(b);
        vec.push_back(a-b);
    }
    sort(vec.begin(), vec.end(), greater<int>());
    long long ans = 0;
    rep(i, 0, k) {
        ans += vec[i];
    }
    cout << ans << endl;
    return 0;
} 