#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int n;
double l = 0.0, r = 100.0;
double calc (double x) {
    return x*x*x+x;
}

int main(){
    cin >> n;
    rep(i, 0, 20){
        double mid = (l+r)/2.0;
        if(calc(mid) > n*1.0) r = mid;
        else l = mid;
    }
    cout << l << endl;
    return 0;
} 