#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n > 41) {
        cout << "AGC0" << n+1 << endl;
    } else if (n < 10) {
        cout << "AGC00" << n << endl;
    } else {
        cout << "AGC0" << n << endl;
    }

    return 0;
} 