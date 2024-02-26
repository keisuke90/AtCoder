#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

class SegmentTree {
    public:
        int dat[300000], siz = 1;

        void init(int N) {
            siz = 1;
            while(siz < N) siz *= 2;
            for(int i = 1; i < siz * 2; i++) dat[i] = 0;
        }

        void update(int pos, int x) {
            pos = pos + siz - 1;
            dat[pos] = x;
            while(pos >= 2) {
                pos /= 2;
                dat[pos] = max(dat[pos*2], dat[pos*2+1]);
            }   
        }

        int query(int l, int r, int a, int b, int u) {
            if(r <= a || b <= l) return -1000000000;
            if(l <= a && b <= r) return dat[u];
            int m = (a+b)/2;
            int AnswerL = query(l, r, a, m, u * 2);
            int AnswerR = query(l, r, m, b, u * 2 + 1);
            return max(AnswerL, AnswerR);
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
            int a, b;
            cin >> a >> b;
            st.update(a, b);
        } else {
            int a, b;
            cin >> a >> b;
            cout << st.query(a, b, 1, st.siz+1, 1) << endl;
        }
    }

    return 0;
} 