#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> X(N), Y(N);
    string S;
    rep(i, 0, N) cin >> X[i] >> Y[i];
    cin >> S;
    map<int, vector<int>> mp;
    rep(i, 0, N) mp[Y[i]].push_back(i);
    for (auto p : mp) {
        vector<int> ids = p.second;
        vector<pair<int, char>> ps;
        for (int id : ids) {
            ps.emplace_back(X[id], S[id]);
        }
        sort(ps.begin(), ps.end());
        int len = ps.size();
        rep(i, 0, len-1){
            if(ps[i].second == 'R' && ps[i+1].second == 'L')
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
} 