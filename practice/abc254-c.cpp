#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<priority_queue<int, vector<int>, greater<int>>> vec(k);

    rep(i, 1, n+1) {
        int a;
        cin >> a;
        vec[i%k].push(a);
    }

    int tmp = -1;
    bool flg = true;
    rep(i, 1, n+1) {
        if(tmp > vec[i%k].top()) {
            flg = false;
            break;
        }
        tmp = vec[i%k].top();
        vec[i%k].pop();
    }

    if(flg) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
} 