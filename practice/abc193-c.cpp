#include <bits/stdc++.h>
#define rep(i, start, end) for(long long i = start; i < end; i++)
using namespace std;

int main(){
    long long n;
    cin >> n;
    set<long long> st;
    rep(i, 2, round(sqrt(n))+1) {
        long long tmp = i*i;
        while(tmp <= n) {
            st.insert(tmp);
            tmp*=i;
        }
    }
    cout << n-st.size() << endl;
    return 0;
} 