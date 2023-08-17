#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<int> A(n);
    rep(i, 0, n) cin >> A[i];
    int rotate = 0;

    rep(i, 0, q) {
        int t, x, y;
        cin >> t >> x >> y;
        if(t==1) {
            x--; y--;
            swap(A[(x+rotate)%n], A[(y+rotate)%n]);
        }

        if(t==2) rotate = (rotate+n-1)%n;

        if(t==3) {
            x--;
            cout << A[(x+rotate)%n] << endl;
        }
    }

    return 0;
} 