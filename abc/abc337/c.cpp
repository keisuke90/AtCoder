#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> vec(n);

    rep(i, 0, n) {
        int a;
        cin >> a;
        vec[i] = {a, i+1};
    }

    sort(vec.begin(), vec.end());

    int nxt = vec[0].second;

    rep(i, 0, n) {
        cout << nxt << ' ';

        int l = 0, r = n;
        while(r-l > 1) {
            int mid = (l+r)/2;
            if(vec[mid].first < nxt) l = mid;
            else r = mid;
        }
        nxt = vec[r].second;
    }

    return 0;
} 