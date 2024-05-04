// #include <bits/stdc++.h>
// #define rep(i, start, end) for(int i = start; i < end; i++)
// using namespace std;

// int main(){
//     int n, k;
//     cin >> n >> k;
//     vector<int> p(n), pos(n+1);
//     rep(i, 0, n) {
//         cin >> p[i];
//         pos[p[i]] = i+1;
//     }

//     queue<int> q;
//     priority_queue<int> pq1;
//     priority_queue<int, vector<int>, greater<int>> pq2;
//     vector<bool> used(n+1);
//     int ans = 1e9;
//     rep(i, 1, n+1) {
//         if(q.size() < k) {
//             q.push(pos[i]);
//             pq1.push(pos[i]);
//             pq2.push(pos[i]);
//         } else {
//             while(used[pq1.top()]) pq1.pop();
//             while(used[pq2.top()]) pq2.pop();
//             ans = min(ans, pq1.top()-pq2.top());
//             int now = q.front(); q.pop();
//             used[now] = true;
//             if(pq1.top() == now) pq1.pop();
//             if(pq2.top() == now) pq2.pop();
//             q.push(pos[i]);
//             pq1.push(pos[i]);
//             pq2.push(pos[i]);
//         }
//     }
//     ans = min(ans, pq1.top()-pq2.top());
//     cout << ans << endl;

//     return 0;
// } 

#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> pos(n);
    rep(i, 0, n) {
        int p;
        cin >> p;
        pos[p-1] = i;
    }

    set<long long> st;
    rep(i, 0, k) st.insert(pos[i]);
    long long ans = *st.rbegin() - *st.begin();
    rep(i, k, n) {
        st.erase(pos[i-k]);
        st.insert(pos[i]);
        ans = min(ans, *st.rbegin() - *st.begin());
    }
    cout << ans << endl;
    return 0;
} 