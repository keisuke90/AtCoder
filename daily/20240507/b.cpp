#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int y;
    cin >> y;

    while(y%4 != 2) y++;
    cout << y << endl;
    return 0;
} 