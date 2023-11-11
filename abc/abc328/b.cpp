#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    rep(i, 1, n+1) {
        int d;
        cin >> d;
        if(i >=100) {
            continue;
        } else if(i >=10) {
            int a = i%10;
            int b = i/10;
            if(a==b) {
                if(d>=a*11) {
                    ans+=2;
                } else if(d>=a) {
                    ans++;
                }
            }
        } else {
            if(d>=i*11) {
                ans+=2;
            } else if(d>=i) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
} 