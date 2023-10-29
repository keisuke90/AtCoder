#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    stack<pair<int, int>> st;
    st.push({0, 0});
    int cnt = 0;
    rep(i, 0, n) {
        int a;
        cin >> a;
        if(st.top().first == a) {
            st.top().second++;
            cnt++;
            if(st.top().second == a) {
                cnt -= st.top().second;
                st.pop();
            }

        } else {
            st.push({a, 1});
            cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
} 