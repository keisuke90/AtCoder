#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;

    double l = 0;
    double r = 100;
    double mid = 0;
    rep(i, 0, 20) {
        mid = (l+r)/2;
        double val = mid * mid * mid +mid;
        if(val > n *1.0) r = mid;
        else l = mid;
    }
    cout << fixed << setprecision(5) << mid << endl;

    return 0;
} 