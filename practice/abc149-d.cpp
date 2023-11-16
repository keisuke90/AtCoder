#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k, r, s, p;
    string t;
    cin >> n >> k >> r >> s >> p >> t;
    vector<bool> get(n, true);

    long long ans = 0;
    rep(i, 0, n) {
        if(i >= k && t[i]==t[i-k] && get[i-k]) {
            get[i] = false;
            continue;
        }

        if(t[i]=='r' && get[i]) {
            ans+=p;
        } else if(t[i]=='s' && get[i]) {
            ans+=r;
        } else if(t[i]=='p' && get[i]) {
            ans+=s;
        }
    }
    cout << ans << endl;
    return 0;
} 