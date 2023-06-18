#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int t;
    cin >> t;
    rep(i, 0, t){
        int n;
        cin >> n;
        int p[n+1];
        rep(j, 1, n+1){
            cin >> p[j];
        }
        int cnt = 0;
        rep(j, 1, n+1){
            bool check = true;
            rep(k, j+1, n+1){
                if(p[j] > p[k]) check = false;
            }
            if(check) cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
} 