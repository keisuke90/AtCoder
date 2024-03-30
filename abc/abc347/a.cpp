#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    rep(i, 0, n) {
        int a;
        cin >> a;
        if(a%k==0) {
            cout << a/k << ' ';
        }
    }
    cout << endl;
    return 0;
} 