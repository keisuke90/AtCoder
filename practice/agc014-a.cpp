#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long a, b, c;
    cin >> a >> b >>c;
    int cnt=0;
    while(a%2==0 && b%2==0 && c%2==0) {
        if(a==b && a==c) {
            cout << -1 << endl;
            return 0;
        }
        long long tmp1 = b/2 + c/2;
        long long tmp2 = a/2 + c/2;
        long long tmp3 = a/2 + b/2;
        a=tmp1;
        b=tmp2;
        c=tmp3;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
} 