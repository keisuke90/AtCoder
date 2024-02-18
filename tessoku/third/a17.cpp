#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i, 1, n) cin >> a[i];
    rep(i, 2, n) cin >> b[i];
    vector<int> dp(n);
    rep(i, 1, n) {
        if(i == 1) dp[i] = a[i];
        else {
            dp[i] = min(dp[i-1]+a[i], dp[i-2]+b[i]);
        }
    }

    stack<int> st;
    int pos = n-1;
    st.push(pos);
    while(pos > 0) {
        if(dp[pos]-a[pos] == dp[pos-1]) {
            pos--;
        } else if (dp[pos]-b[pos] == dp[pos-2]) {
            pos-=2;
        }
        st.push(pos);
    }
    cout << st.size() << endl;
    while(!st.empty()) {
        cout << st.top() + 1 << ' ';
        st.pop();
    }
    cout << endl;
    return 0;
} 