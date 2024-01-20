#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int sumx=0, sumy=0;
    rep(i, 0, n) {
        int x, y;
        cin >> x >> y;
        sumx+=x;
        sumy+=y;
    }

    if(sumx==sumy) cout << "Draw" << endl;
    else if(sumx > sumy) cout << "Takahashi" << endl;
    else cout << "Aoki" << endl;
    return 0;
} 