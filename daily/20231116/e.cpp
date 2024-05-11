#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, w;
    cin >> n >> w;
    vector<pair<long long, long long>> vec(n);
    rep(i, 0, n) {
        int a, b;
        cin >> a >> b;
        vec[i] = {a, b};
    }
    // sort(vec.begin(), vec.end());
    // reverse(vec.begin(), vec.end());
    sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) { return a > b; });

    int i = 0;
    int W = 0;
    long long ans = 0;
    while(W < w) {
        long long a = vec[i].first;
        long long b = vec[i].second;
        if(w >= W+b) {
            W+=b;
            ans+=a*b;
        } else {
            int tmp = w - W;
            W+=tmp;
            ans+=a*tmp;
        }
        i++;
        if(i == n) break;
    }
    cout << ans << endl;
    return 0;
} 