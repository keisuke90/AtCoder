#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    int z = abs(x - y);
    
    if(x > y) {
        if(z <= 3) cout << "Yes" << endl;
        else cout << "No" << endl;
    } else {
        if(z <= 2) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
} 