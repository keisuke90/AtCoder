#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    int t = 0;
    rep(i, 0, n) {
        int a;
        cin >> a;
        t=max(t, a);
        vec[i] = a;
    }

    sort(vec.begin(), vec.end(), greater<int>());
    rep(i, 0, n) {
        if(vec[i]!=t) {
            cout << vec[i] << endl;
            return 0;
        }
    }
    return 0;
} 