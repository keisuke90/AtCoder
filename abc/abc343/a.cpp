#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    rep(i, 0, 9) {
        if(a+b != i) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
} 