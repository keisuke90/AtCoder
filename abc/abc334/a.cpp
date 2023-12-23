#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int b, g;
    cin >> b >> g;
    int p = max(b, g);
    if(p == b) {
        cout << "Bat" << endl;
    } else {
        cout << "Glove" << endl;
    }

    return 0;
} 