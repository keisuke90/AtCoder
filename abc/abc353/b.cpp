#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    queue<int> q;
    rep(i, 0, n) {
        int a;
        cin >> a;
        q.push(a);
    }

    int i = 0;
    int e = 0;
    while(!q.empty()) {
        i++;
        while(e < k && e+q.front() <= k) {
            e+=q.front();
            q.pop();
            if(q.empty()) break;
        }
        e = 0;
    }
    cout << i << endl;

    return 0;
} 