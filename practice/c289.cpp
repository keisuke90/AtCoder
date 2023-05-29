#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> s(m);
    for(int i = 0; i < m; i++){
        int c;
        cin >> c;
        for(int j = 0; j < c; j++){
            int a;
            cin >> a;
            a--;
            s[i] |= (1 << a);
        }
    }

    int ans = 0;
    for(int i = 0; i < 1<<m; i++){
        int t = 0;
        for(int j = 0; j < m; j++){
            if(i>>j&1) t |= s[j];
        }
        if(t == (1<<n)-1) ans ++;
    }

    cout << ans << endl;
} 