#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    queue<int> q;
    rep(i, 0, n) {
        int a;
        cin >> a;
        if(a%2 == 0) q.push(a);
    }
    int ans = 0;
    while(q.size() > 0) {
        int p = q.front();
        q.pop();
        while(true) {
            p/=2;
            ans++;
            if(p%2==1) break;
        }
    }
    cout << ans << endl;
    return 0;
}   
