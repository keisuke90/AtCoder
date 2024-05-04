#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, x, y, z;
    cin >> n >> x >> y >> z;

    if(z >= x && z <= y) {
        cout << "Yes" << endl;
        return 0;
    } else if(z >= y && z <= x) {
        cout << "Yes" << endl;
        return 0;
    }

    
    cout << "No" << endl;
    return 0;
} 