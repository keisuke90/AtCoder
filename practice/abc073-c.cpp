#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, bool> mp;
    rep(i, 0, n) {
        int a; 
        cin >> a;
        mp[a] = !mp[a];
    }

    int cnt = 0;
    for(auto A : mp) {
        if(A.second) cnt++;
    }
    cout << cnt << endl;
    return 0;
} 