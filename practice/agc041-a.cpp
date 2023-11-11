#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n, a, b;
    cin >> n >> a >> b;
    long long ans1 = min(a-1, n-b) +1 + (b-a-1)/2;

    if(abs(a-b)%2==0) {
        long long ans2 = abs(a-b)/2;
        cout << min(ans1, ans2) << endl;
    } else {
        cout << ans1 << endl;
    }

    return 0;
} 