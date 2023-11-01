#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int ,int>> vec(n);
    rep(i, 0, n) {
        int a, b;
        cin >> a >> b;
        vec[i] = {b, a};
    }

    sort(vec.begin(), vec.end());

    bool flg = true;
    long long sum = 0;
    rep(i, 0, n) {
        sum += vec[i].second;
        if(sum > vec[i].first) {
            flg = false;
            break;
        }
    }

    if(flg) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
} 