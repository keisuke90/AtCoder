#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    if(y-x > 2 || y-x < -3) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
} 