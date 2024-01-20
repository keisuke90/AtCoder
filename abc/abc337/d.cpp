#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w, k;
    cin >> h >> w >> k;
    vector<string> vec(h);
    rep(i, 0, h) cin >> vec[i];

    int ans = 1000000009;
    rep(i, 0, h) {
        map<char, int> mp;
        queue<char> q;
        rep(j, 0, w) {
            if(q.size() < k) {
                q.push(vec[i][j]);
                mp[vec[i][j]]++;
                if(q.size()==k) {
                    if(mp['x']==0) {
                        int cnt = k - mp['o'];
                        ans = min(ans, cnt);
                    }
                }
            } else {
                q.push(vec[i][j]);
                char tmp = q.front();q.pop();
                mp[tmp]--;
                mp[vec[i][j]]++;
                if(mp['x']==0) {
                    int cnt = k - mp['o'];
                    ans = min(ans, cnt);
                }
            }
        }
    }

    rep(j, 0, w) {
        map<char, int> mp;
        queue<char> q;
        rep(i, 0, h) {
            if(q.size() < k) {
                q.push(vec[i][j]);
                mp[vec[i][j]]++;
                if(q.size()==k) {
                    if(mp['x']==0) {
                        int cnt = k - mp['o'];
                        ans = min(ans, cnt);
                    }
                }
            } else {
                q.push(vec[i][j]);
                char tmp = q.front();q.pop();
                mp[tmp]--;
                mp[vec[i][j]]++;
                if(mp['x']==0) {
                    int cnt = k - mp['o'];
                    ans = min(ans, cnt);
                }
            }
        }
    }

    if(ans==1000000009) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
} 