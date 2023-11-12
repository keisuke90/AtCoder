#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, string>> vec(n);
    rep(i, 0, n) {
        string s;
        int t;
        cin >> s >> t;
        vec[i] = {t, s};
    }
    sort(vec.begin(), vec.end());
    cout << vec[n-2].second << endl;

    return 0;
} 