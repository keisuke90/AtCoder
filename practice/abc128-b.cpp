#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<string, int>> vec(n);
    rep(i, 0, n) {
        string s;
        int p;
        cin >> s >> p;
        vec[i] = {s, p};
    }
    vector<pair<string, int>> vec2 = vec;
    sort(vec.begin(), vec.end(), [](auto &left, auto &right) {
        if (left.first == right.first) {
            return left.second > right.second;
        }
        return left.first < right.first;
    });

    rep(i, 0, n) {
        rep(j, 0, n) {
            if(vec[i].first == vec2[j].first && vec[i].second == vec2[j].second) {
                cout << j+1 << endl;
                break;
            }
        }
    }
    return 0;
} 