#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    string s = to_string(n);

    rep(i, 0, n-1) {
        s+=to_string(n);
    }
    cout << s << endl;

    return 0;
} 