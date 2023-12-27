#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<int> b(n+1, 0);
    set<int> st;

    rep(i, 0, n) {
        cin >> a[i];
        if(a[i]<=n) {
            b[a[i]]++;
        }
    }
    rep(i, 0, n+1) {
        if(b[i]==0) st.insert(i);
    }

    rep(j, 0, q) {
        int i, x;
        cin >> i >> x;
        i--;
        if(a[i]<=n) {
            b[a[i]]--;
            if(b[a[i]]==0) st.insert(a[i]);
        }
        a[i] = x;
        if(a[i]<=n){
            if(b[a[i]]==0) st.erase(a[i]);
            b[a[i]]++;
        }
        cout << *st.begin() << endl;
    }
    return 0;
} 