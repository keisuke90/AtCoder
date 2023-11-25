#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    priority_queue<int> q;
    rep(i, 0, n) {
        int a;
        cin >> a;
        q.push(a);
    }

    while(m > 0) {
        int tmp = q.top(); q.pop();
        tmp /=2;
        q.push(tmp);
        m--;
    }

    long long ans = 0;
    while(!q.empty()) {
        ans+=q.top();
        q.pop();
    }
    cout << ans << endl;
    return 0;
} 