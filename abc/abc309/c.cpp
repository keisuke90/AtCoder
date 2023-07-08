#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
map<long long, long long> day;
int main(){
    long long n, k;
    cin >> n >> k;
    long long a, b;
    rep(i, 1, n+1) {
        cin >> a >> b;
        day[1] += b;
        day[a+1] -= b;
    }
    long long cnt = 0;
    for(auto& d : day) {
        cnt += d.second;
        if(cnt <= k) {
            cout << d.first << endl;
            return 0;
        }
    }
    return 0;
} 