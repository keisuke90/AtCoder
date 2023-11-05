#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int s;
    cin >> s;
    map<int, int> mp;
    mp[s] = 1;
    int cnt = 1;
    while(true) {
        cnt++;
        if(s%2==0) {
            s/=2;
            if(mp[s] == 1) {
                break;
            } else {
                mp[s] = 1;
            }
        } else {
            s = 3*s+1;
            if(mp[s] == 1) {
                break;
            } else {
                mp[s] = 1;
            }
        }
    }
    cout << cnt << endl;
    return 0;
} 