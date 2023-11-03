#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int k;
    cin >> k;
    
    if(k > 69) {
        cout << "22:" << k-60 << endl;
    } else if (k > 59) {
        cout << "22:0" << k-60 << endl;
    } else if(k > 9) {
        cout << "21:" << k << endl;
    } else {
        cout << "21:0" << k << endl;
    }


    return 0;
} 