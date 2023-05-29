#include <bits/stdc++.h>
using namespace std;

int main(){
    int X, Y, Z;
    cin >> X >> Y >> Z;
    int ans = -1;

    if(Y < 0){
        X = -X;
        Y = -Y;
        Z = -Z;
    }
    if(X < Y){
        ans = abs(X);
        cout << ans << endl;
        return 0;
    } else if(X > Y && Z < Y) {
        ans = abs(Z) + abs(X-Z);
        cout << ans << endl;
        return 0;
    }

    cout << ans << endl;
} 