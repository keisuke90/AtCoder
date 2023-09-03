#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, d, p;
    cin >> n >> d >> p;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec[i];

    sort(vec.begin(), vec.end(), greater<int>());
    long long tmp = 0, ans = 0;

    rep(i, 0, n) {
        tmp += vec[i];
        if((i+1)%d == 0) {
            if(tmp >= p) ans += p;
            else ans += tmp;
            tmp = 0;
        }
    }

    if(tmp >= p) ans += p;
    else ans += tmp;
    cout << ans << endl;
    return 0;
} 