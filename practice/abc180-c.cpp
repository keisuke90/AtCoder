#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n;
    cin >> n;

    set<long long> st;
    rep(i, 1, round(sqrt(n)+1)) {
        if(n%i==0) {
            st.insert(i);
            st.insert(n/i);
        }
    }

    for(long long s : st) {
        cout << s << endl;
    }
    return 0;
} 