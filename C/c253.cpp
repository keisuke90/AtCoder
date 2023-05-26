#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int q;
    cin >> q;
    map<int, int> mp;
    int imax = 0, imin = 2147483647;

    rep(i, 0, q){
        int a, b, c;
        cin >> a;
        if(a == 1){
            cin >> b;
            mp[b]++;
            imax = max(imax, b);
            imin = min(imin, b);
        }
        if(a == 2) {
            cin >> b >> c;
            mp[b] -= min(mp[b], c);
            if(mp[b] == 0){
                mp.erase(b);
                if(mp.empty()){
                    imax = 0;
                    imin = 2147483647;
                } else {
                    if(b == imin) imin = mp.begin() -> first;
                    if(b == imax) imax = mp.rbegin() -> first;
                }
            }
        }
        if(a == 3) {
            cout << imax - imin << endl;
        }
    }
    return 0;
} 