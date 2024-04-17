#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<long long> Q(q+1), sum(q+1), A(n+1, -1);

    int cnt = 0;
    rep(i, 1, q+1) {
        cin >> Q[i];

        if(A[Q[i]] == -1){
            A[Q[i]] = 1;
            cnt++;
        } else {
            A[Q[i]] = -1;
            cnt--;
        }
        sum[i] = cnt;
    }

    rep(i, 1, q+1) sum[i] += sum[i-1];
    A = vector<long long> (n+1, -1);
    vector<long long> ans(n+1);
    rep(i, 1, q+1) {
        if(A[Q[i]] == -1) {
            A[Q[i]] = i;
        } else {
            ans[Q[i]] += (sum[i-1] - sum[A[Q[i]]-1]);
            A[Q[i]] = -1;
        }
    }

    rep(i, 1, n+1) {
        if(A[i] != -1) {
            ans[i] += (sum[q] - sum[A[i]-1]);
        }
        cout << ans[i] << ' ';
    }
    cout << endl;



    return 0;
} 