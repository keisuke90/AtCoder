#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int GCD(int A, int B) {
    int ret = A%B;
    if (ret == 0) return B;
    return GCD(B, ret);
}

int main(){
    int a, b;
    cin >> a >> b;
    int A = a > b ? a : b;
    int B = a > b ? b : a;
    
    cout << GCD(A, B) << endl;

    return 0;
} 