#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int x;
    cin >> x;

    int i = 0;
    int ttl = 0;
    while(ttl < x) {
        ttl+=i+1;
        i++;
    }

    cout << i << endl;

    return 0;
} 