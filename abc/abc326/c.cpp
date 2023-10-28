#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;
    map<long long, long long> mp;
    rep(i, 0, n) {
        int a;
        cin >> a;
        mp[a] += 1;
    }

    long long ans = 0;
    long long tmp = 0;
    queue<pair<int, long long>> q;
    long long front = mp.begin()->first;
    long long back = 0;
    
    for(auto e : mp) {
        q.push({e.first, e.second});
        back = e.first;
        tmp += e.second;
        if(back - front >= m) {
            while(back - front >= m) {
                tmp -= q.front().second;
                q.pop();
                front = q.front().first;
            }
        }
        ans = max(ans, tmp);
    }

    cout << ans << endl;
    return 0;
} 