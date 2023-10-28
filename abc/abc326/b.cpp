#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    bool flg = true;

    while(flg) {
        string S = to_string(n);
        if((S[0] - '0') * (S[1] - '0') == (S[2] - '0')) {
            flg = false;
        }
        if(flg) n++;
    }

    cout << n << endl;
    return 0;
} 