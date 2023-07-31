#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    int ans=0;
    cin >> n;
    rep(i, 0, n) {
        int a;
        cin >> a;
        ans+=a;
    }
    cout << ans << endl;
    return 0;
} 