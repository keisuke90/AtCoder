#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> a;
    stack<int> st;
    rep(i, 0, m) {
        int p;
        cin >> p;
        a.push_back(p);
    }

    rep(i, 1, n+1) {
        if(find(a.begin(), a.end(), i) != a.end()) {
            st.push(i);
        } else {
            cout << i << ' ';
            while(!st.empty()) {
                cout << st.top() << ' ';
                st.pop();
            }
        }
    }
    cout << endl;
    return 0;
} 