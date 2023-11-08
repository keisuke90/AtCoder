#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    double tax1 = 0.08;
    double tax2 = 0.1;

    int ans = -1;
    rep(i, 0, 100000) {
        if(floor(i*tax1)==a && floor(i*tax2)==b) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
} 