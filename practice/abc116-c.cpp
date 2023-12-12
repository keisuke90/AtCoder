#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int n, ans;
vector<int> h(109);

void func(int L, int R) {
    if(L >= R) return;

    int mi = 1000;
    rep(i, L, R) mi = min(mi, h[i]);

    ans += mi;
    rep(i, L, R) h[i] -= mi;

    vector<int> zero;
    zero.push_back(-1);
    rep(i, L, R) if(h[i] == 0) zero.push_back(i);
    zero.push_back(R);

    int n = zero.size();
    rep(i, 0, n-1) func(zero[i]+1, zero[i+1]);
}

int main(){
    cin >> n;
    rep(i, 0, n) cin >> h[i];

    func(0, n);

    cout << ans << endl;

    return 0;
} 