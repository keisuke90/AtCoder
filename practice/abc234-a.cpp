#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int f(int x) {
    return x*x + 2*x + 3;
}

int main(){
    int t;
    cin >> t;
    cout << f(f(f(t)+t) + f(f(t))) << endl;

    return 0;
} 