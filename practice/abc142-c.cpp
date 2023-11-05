#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> vec(n);
    rep(i, 0, n) {
        int a;
        cin >> a;
        vec[i] = {a, i+1};
    }
    sort(vec.begin(), vec.end());
    for(auto v : vec) {
        cout << v.second << ' ';
    }
    cout << endl;

    return 0;
} 