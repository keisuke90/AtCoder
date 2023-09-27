#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> blue(m);
    rep(i, 0, m) {
        cin >> blue[i];
    };
    sort(blue.begin(), blue.end());

    long long pos = 1;
    long long mx = 1000000000;
    vector<long long> x;
    rep(i, 0, m) {
        if(blue[i] - pos == 0) {
            pos++;
            continue;
        }
        x.push_back(blue[i] - pos);
        mx = min(mx, blue[i] - pos);
        pos = blue[i] + 1;
    }
    if(pos <= n) x.push_back(n - pos + 1);

    long long ans = 0;
    rep(i, 0, x.size()) {
        int tmp = x[i]/mx;
        if(x[i]%mx == 0) {
            ans += tmp;
        } else {
            ans += tmp + 1;
        }
    }

    cout << ans << endl;
    return 0;
} 