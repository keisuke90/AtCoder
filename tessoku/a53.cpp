#include <bits/stdc++.h>
using namespace std;

int Q;
priority_queue<int, vector<int>, greater<int>> pq;

int main(){
    cin >> Q;
    int q, x;

    for(int i = 0; i < Q; i++){
        cin >> q;
        if(q == 1) {
            cin >> x;
            pq.push(x);
        }
        if(q == 2) cout << pq.top() << endl;
        if(q == 3) pq.pop();
    }
} 