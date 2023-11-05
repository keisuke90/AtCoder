#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    double tax = 1.08;

    rep(i, 1, n+1) {
        double x = i;
        if((int)(x*tax) == n) {
            cout << i << endl;
            return 0;
        }
    }
    cout << ":(" << endl;
    return 0;
}