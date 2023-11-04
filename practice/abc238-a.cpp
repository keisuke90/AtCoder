#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    long long res = n*n;
    long long t = 2;
    rep(i, 1, n+1) {
        if(t > res) {
            cout << "Yes" << endl;
            return 0;
        }
        t*=2;
    }
    cout << "No" << endl;
    return 0;
} 