#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
long long pow5(int x) {
    long long tmp = x;
    rep(i, 0, 4) tmp*=x;
    return tmp;
}

int main(){
    long long x;
    cin >> x;
    long long a, b;
    rep(i, -1000, 1000) {
        rep(j, -1000, 1000) {
            if((pow5(i)-pow5(j))==x) {
                a=i;
                b=j;
            }
        }
    }
    cout << a << ' ' << b << endl;
    return 0;
} 