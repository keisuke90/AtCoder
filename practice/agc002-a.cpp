#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    if(a == 0 || b == 0) {
        cout << "Zero" << endl;
    } else if(b < 0) {
        if(abs(abs(a)-abs(b))%2 == 0) cout << "Negative" << endl;
        else cout << "Positive" << endl;
    } else if (a < 0) {
        cout << "Zero" << endl;
    } else {
        cout << "Positive" << endl;
    }

    return 0;
} 