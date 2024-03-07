#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    vector<vector<int>> vec(n+1, vector<int>(10, 0));
    rep(i, 0, n) {
        int c = s[i]-'0';
        vec[i+1] = vec[i];
        vec[i+1][c] ^= 1;
    }
    map<vector<int>, int> mp;
    rep(i, 0, n+1) mp[vec[i]]++;

    long long ans = 0;
    for(auto p : mp) {
        long long  n = p.second;
        ans += n*(n-1)/2;
    }
    cout << ans << endl;


    return 0;
} 