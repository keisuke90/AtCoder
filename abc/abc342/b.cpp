#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec[i];
    int q; 
    cin >> q;
    rep(i, 0, q) {
        int a, b;
        cin >> a >> b;
        int a_num=-1;
        int b_num=-1;
        rep(i, 0, n) {
            if(vec[i] == a) a_num = i;
            if(vec[i] == b) b_num = i;
        }
        if(a_num < b_num) cout << a << endl;
        else cout << b << endl;
    }

    return 0;
} 