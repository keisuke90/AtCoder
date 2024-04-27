#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    rep(i, 0, n) cin >> a[i];
    stack<long long> st;
    // reverse(a.begin(), a.end());
    rep(i, 0, n) {
        long long A = a[i];
        while(!st.empty() && st.top() == A) {
            st.pop();
            A++;
        }
        st.push(A);
    }
    cout << st.size() << endl;
    return 0;
} 