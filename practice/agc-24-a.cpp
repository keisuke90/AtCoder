#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long a, b, c, k;
    cin >>a >> b >> c >> k;

    if(k%2==1) {
        cout << b-a << endl;
    } else {
        cout << a-b << endl;
    }

    return 0;
} 