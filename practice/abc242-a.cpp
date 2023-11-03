#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    double a, b, c, x;
    cin >> a >> b >> c >> x;
    if(a >= x) {
        cout << 1 << endl;
    } else if (x <= b) {
        double ans =  c / (b-a);
        cout << ans << endl;
    } else {
        cout << 0 << endl;
    }


    return 0;
} 