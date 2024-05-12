#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    rep(i, 0, n) {
        int a;
        cin >> a;
        mp[a]++;
    }

    rep(i, 0, m) {
        int b;
        cin >> b;
        if(mp[b] == 0) {
            cout << "No" << endl;
            return 0;
        }
        mp[b]--;
    }
    cout << "Yes" << endl;
    return 0;
} 