#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

class SegmentTree {
    public:
        int dat[300000];
        int size = 1;

        void init(int n) {
            while(size < n) size*=2;
            rep(i, 1, size*2) dat[i] = 0;
        }

        void update(int pos, int x) {
            pos += size - 1;
            dat[pos] = x;
            while(pos >= 2) {
                pos/=2;
                dat[pos] = max(dat[pos*2], dat[pos*2+1]);
            }
        }

        int query(int l, int r, int a, int b, int u) {
            if(r <= a || b <= l) return -100000000;
            if(l <= a && b <= r) return dat[u];
            int m = (a+b)/2;
            int ans_left = query(l, r, a, m, u*2);
            int ans_right = query(l, r, m, b, u*2+1);
            return max(ans_left, ans_right);
        }

};

int main(){
    int n, q;
    cin >> n >> q;
    SegmentTree st;
    st.init(n);

    rep(i, 0, q) {
        int Q;
        cin >> Q;
        if(Q == 1) {
            int pos, x;
            cin >> pos >> x;
            st.update(pos, x);
        } else {
            int l, r;
            cin >> l >> r;
            cout << st.query(l, r, 1, st.size+1, 1) << endl;
        }
    }
    return 0;
} 