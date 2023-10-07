#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> vec(n);
    rep(i, 0, n) {
        string s;
        cin >> s;
        int cnt = 0;
        rep(j, 0, n) {
            if(s[j] == 'o') cnt++;
        }
        vec[i] = make_pair(i, cnt);
    }

    sort(vec.begin(), vec.end(), [](auto &left, auto &right) {
        if (left.second == right.second) {
            return left.first < right.first;
        }
        return left.second > right.second;
    });
    rep(i, 0, n) {
        cout << vec[i].first + 1 << ' ';
    }
    cout << endl;
    return 0;
} 