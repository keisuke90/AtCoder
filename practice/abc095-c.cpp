#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    long long ans1 = c*max(x,y)*2;
    long long ans2 = a*x + b*y;
    long long ans3 = x >= y ? c*y*2+(x-y)*a : c*x*2+(y-x)*b;

    cout << min(ans1, min(ans2, ans3)) << endl;

    return 0;
} 