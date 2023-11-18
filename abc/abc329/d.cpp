#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> vec(m);
    rep(i, 0, m) cin >> vec[i];
    map<int, int> mp;

    int t = 0;
    int p = vec[0];
    rep(i, 0, m) {
        mp[vec[i]]+=1;
        if(t == mp[vec[i]]) {
            t = mp[vec[i]];
            if(p > vec[i]) {
                p=vec[i];
                cout << p << endl;
            } else {
                cout << p << endl;
            }
        } else if (t < mp[vec[i]]) {
            t=mp[vec[i]];
            p=vec[i];
            cout << p << endl;
        } else {
            cout << p << endl;
        }
    }

    return 0;
} 