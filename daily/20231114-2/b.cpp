#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int s, t, x;
    cin >> s >> t >> x;
    if(s < t) {
        if(s <= x && t >= x) cout << "Yes" << endl;
        else cout << "No" << endl;
    } else {
        if(x >= s || x < t) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
} 