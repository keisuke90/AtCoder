#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int x, y, n;
    cin >> x >> y >> n;
    vector<int> vec(n+1);
    rep(i, 1, n+1) {
        if(i%3 == 0) {
            vec[i] = min(vec[i-1]+x, vec[i-3]+y);
        } else {
            vec[i] = vec[i-1] + x;
        }
    }
    cout << vec[n] << endl;
    return 0;
} 