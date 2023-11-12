#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int g1(int x) {
    string tmp = to_string(x);
    sort(tmp.begin(), tmp.end(), greater<char>());
    return stoi(tmp);
}

int g2(int x) {
    string tmp = to_string(x);
    sort(tmp.begin(), tmp.end());
    return stoi(tmp);
}

int f(int x) {
    int tmp1 = g1(x);
    int tmp2 = g2(x);
    return tmp1-tmp2;
}

int main(){
    int n, k;
    cin >> n >> k;

    long long ans = n;
    rep(i, 0, k) {
        ans=f(ans);
    }
    cout << ans << endl;
    return 0;
} 