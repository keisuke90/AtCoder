#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    long long total = ((k+1)*k)/2;
    map<int, int> mp;
    rep(i, 0, n) {
        long long a;
        cin >> a;
        if(mp[a] < 1) {
            mp[a] = 1;
            if(a <= k) {
                total -= a;
            }
        }
    }
    cout << total << endl;
    return 0;
} 