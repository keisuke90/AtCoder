#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long a, b, c;
    cin >> a >> b >> c;
    if(a%2==0 || b%2==0 || c%2==0) {
        cout << 0 << endl;
        return 0;
    }
    cout << min(a*b, min(a*c, b*c)) << endl;
    return 0;
} 