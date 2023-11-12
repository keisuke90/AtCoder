#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = pow(3, n);

    int odd = 1;
    rep(i, 0, n) {
        int x;
        cin >> x;
        if(x%2==0) {
            odd*=2;
        }
    }
    cout << sum - odd << endl;

    return 0;
} 