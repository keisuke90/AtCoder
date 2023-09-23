#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    n--;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec[i];
    sort(vec.begin(), vec.end());
    int tmp = 0;
    rep(i, 1, n - 1) {
        tmp += vec[i];
    }
    int diff = x - tmp;

    if(n == 2) {
        if(vec[0] >= x) {
            cout << 0 << endl;
            return 0;
        }
        if(vec[1] == x) {
            cout << vec[1] << endl;
            return 0;
        }
        if(vec[1] < x) {
            cout << -1 << endl;
            return 0;
        }
        cout << x << endl;
        return 0;
    }

    
    if(diff <= vec[0]) {
        cout << 0 << endl;
        return 0;
    }
    if(diff >= vec[n-1]) {
        if(diff == vec[n-1]) {
            cout << vec[n-1] << endl;
            return 0;
        } else {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << diff << endl;
    return 0;
} 