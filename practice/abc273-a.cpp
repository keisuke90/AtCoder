#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int rec(int a) {
    if(a<=1) return 1;
    return a*rec(a-1);
}

int main() {
    int n;
    cin >> n;

    int ans = rec(n);
    cout << ans << endl;
}