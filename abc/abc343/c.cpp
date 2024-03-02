#include <bits/stdc++.h>
#define rep(i, start, end) for(long long i = start; i < end; i++)
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long ans = 1;
    rep(i, 1, 1000001) {
        if(i * i * i > n) break;

        string s = to_string(i * i * i);
        string s2 = s;
        reverse(s2.begin(), s2.end());
        if(s == s2) {
            ans = i*i*i;
        }
    }
    cout << ans << endl;
    return 0;
} 