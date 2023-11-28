#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int k;
    cin >> k;

    int ans = -1;
    int tmp = 0;

    rep(i, 1, k+1) {
        tmp=(tmp*10+7)%k;
        if(tmp%k==0) {
            ans=i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
} 