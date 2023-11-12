#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    rep(i, 0, n) {
        int a;
        cin >> a;
        if(a!=x) cout << a << ' ';
    }
    cout << endl;
    return 0;
} 