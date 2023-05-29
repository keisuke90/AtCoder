#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b >> c;

    double r = hypot(a, b);
    double theta = atan2(b, a);

    theta += c * acos(-1.0) / 180.0;

    double x = cos(theta) * r;
    double y = sin(theta) * r;

    cout << fixed<<setprecision(10) << x << ' ' << y << endl;
} 