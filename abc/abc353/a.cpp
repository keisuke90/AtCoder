#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int a;
    cin >> a;
    rep(i, 1, n) {
        int b;
        cin >> b;
        if(b > a) {
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
} 