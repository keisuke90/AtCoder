#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a, b;
    cin >> a>> b;
    long long A = pow(a, b);
    long long B = pow(b, a);

    cout << A + B << endl;
    return 0;
} 