#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    queue<int> q;
    set<int> s;

    int cnt = 0;
    int ans = 0;
    rep(i, 0, n) {
        int a;
        cin >> a;

        s.insert(a);
        mp[a]++;
        q.push(a);
        ++cnt;
        if(s.size() <= k) {
            ans = max(ans, cnt);
        } else {
            while(s.size() > k) {
                cnt--;
                int tmp = q.front();q.pop();
                mp[tmp]--;
                if(!mp[tmp]) s.erase(tmp);
            }
        }
    }
    ans = max(ans, cnt);
    cout << ans << endl;
    return 0;
} 