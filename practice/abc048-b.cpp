#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
long long a, b, x;

long long func(long long n) {
    if(n==-1) return 0;
    else return n/x + 1;
}

int main(){
    cin >> a >> b >> x;
    long long ans = func(b) - func(a-1);
    cout << ans << endl;

    return 0;
} 