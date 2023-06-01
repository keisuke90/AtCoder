#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a, b;
    int w;
    cin >> a >> b >> w;
    int ans1 = 1e9;
    int ans2 = 0;
    rep(i, 0, 1000001){
        if(a*i <= 1000*w && 1000*w <= b*i){
            ans1 = min(ans1, i);
            ans2 = max(ans2, i);
        }
    }
    if(ans2 == 0) cout << "UNSATISFIABLE" << endl;
    else cout << ans1 << " " << ans2 << endl;
    return 0;
} 