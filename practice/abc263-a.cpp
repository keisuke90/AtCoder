#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    map<int, int> mp;
    rep(i, 0, 5) {
        int a;
        cin >> a;
        mp[a]+=1;
    }
    if(mp.size() == 2 && (mp.begin()->second == 2 || mp.begin()->second == 3)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}