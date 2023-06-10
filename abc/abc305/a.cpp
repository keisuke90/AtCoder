#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int d = n%5;

    if(n%5 == 0){
        cout << n << endl;
    } else if (d >=3) {
        cout << n + 5 - d << endl;
    } else if (d < 3) {
        cout << n - d << endl;
    }

    return 0;
} 