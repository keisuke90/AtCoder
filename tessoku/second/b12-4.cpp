#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int n;
int calc(double mid) {
    return mid*mid*mid+mid;
}

int main(){
    cin >> n;

    double l = 1.0;
    double r = 100.0;
    rep(i, 0, 20) {
        if(l == r) break;
        double mid = (l+r)/2.0;
        if(calc(mid) < n * 1.0) l = mid;
        else r = mid;
    }

    cout << l << endl;
    return 0;
} 