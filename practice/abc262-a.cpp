#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int y;
    cin >> y;
    while(true) {
        if(y%4 == 2) {
            cout << y << endl;
            return 0;
        }
        ++y;
    }

    return 0;
} 