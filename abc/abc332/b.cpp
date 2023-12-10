#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int k, g, m;
    cin >> k >> g >> m;

    int G = 0;
    int M = 0;
    rep(i, 0, k) {
        if(G==g) G=0;
        else if(M==0) M=m;
        else {
            while(G<g && M > 0) {
                G++;
                M--;
            }
        }
    }
    cout << G << ' ' << M << endl;
    return 0;
} 