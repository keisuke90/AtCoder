#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a[8];
    rep(i, 0, 8) cin >> a[i];

    bool ok = true;
    rep(i, 0, 8) {
        if(i<7 && a[i] > a[i+1]) ok = false;
        if(a[i] < 100 || a[i] > 675) ok = false;
        if(a[i]%25!=0) ok = false;
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
} 