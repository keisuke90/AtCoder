#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    map<long long, long long> mp;

    rep(i, 0, n) {
        long long a, b;
        cin >> a >> b;
        mp[a] += b;
    }

    long long ans = 0;
    long long pos = 0;
    for(auto m : mp) {
        if(m.first-pos <= k) {
            ans+=m.first-pos;
            k-=m.first-pos;
            k+=m.second;
            pos=m.first;
        } else {
            ans+=k;
            k=0;
            break;
        }
    }

    cout << ans+k << endl;
    return 0;
} 