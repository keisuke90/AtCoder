#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m, l;
    cin >> n;
    vector<long long> A(n);
    rep(i, 0, n) cin >> A[i];
    cin >> m;
    vector<long long> B(m);
    rep(i, 0, m) cin >> B[i];
    cin >> l;
    vector<long long> C(l);
    rep(i, 0, l) cin >> C[i];

    vector<long long> AB(n*m);
    rep(i, 0, n) {
        rep(j, 0, m) {
            AB[i*m+j] = A[i] + B[j];
        }
    }
    sort(AB.begin(), AB.end());

    int q;
    cin >> q;
    vector<int> Q(q);
    rep(i, 0, q) cin >> Q[i];

    rep(i, 0, q) {
        bool ok = false;
        rep(j, 0, l) {
            if(binary_search(AB.begin(), AB.end(), Q[i]-C[j])) {
                ok = true;
                break;
            }
        }
        if(ok) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    

    return 0;
} 