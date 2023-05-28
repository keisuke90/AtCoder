#include <bits/stdc++.h>
#define rep(i, start, end) for (int i = start; i < end; i++)
using namespace std;

vector<pair<char, int>> rle(const string &s){
    vector<pair<char, int>> res;
    for (char c : s){
        if(res.size() > 0 && res.back().first == c) {
            res.back().second++;
        } else {
            res.emplace_back(c, 1);
        }
    }
    return res;
}

bool solve(){
    string s, t;
    cin >> s >> t;
    auto a = rle(s);
    auto b = rle(t);
    if (a.size() != b.size()) return false;
    rep(i, 0, a.size()){
        if(a[i].first != b[i].first) return false;
        int a1 = a[i].second;
        int b1 = b[i].second;
        if(a1 == 1) {
            if(b1 != 1) return false;
        } else {
            if(b1 < a1) return false;
        }
    }
    return true;
}

int main(){
    if(solve()) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}