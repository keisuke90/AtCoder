#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    vector<int> ans(n);

    rep(ri, 0, 2) {
        {
            int cnt = 0;
            rep(i, 0, n) {
                if(s[i] == 'R') cnt++;
                else {
                    ans[i] += cnt/2;
                    ans[i-1] += (cnt+1)/2;
                    cnt = 0;
                }
            }
        }
        reverse(ans.begin(),ans.end());
        reverse(s.begin(), s.end());
        rep(i, 0, n) {
            if(s[i] == 'L') s[i] = 'R';
            else s[i] = 'L';
        }
    }

    rep(i, 0, n) cout << ans[i] << ' ';
    cout << endl;
    return 0;
} 