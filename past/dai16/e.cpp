#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string x;
    cin >> x;
    int n = x.size();
    bool flg = true;
    rep(i, 0, n) {
        if(i==0) {
            if(x[i]!='1') {
                flg = false;
                break;
            }
        } else {
            if(x[i]!='0') {
                flg = false;
                break;
            }
        }
    }

    if(flg) n--;
    cout << n << endl;

    return 0;
} 