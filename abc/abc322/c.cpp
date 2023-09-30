#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> vec(n, -1);
    rep(i, 0, m) {
        int a;
        cin >> a;
        a--;
        vec[a] = 0;
    }

    for(int i = n - 2; i >= 0; i--) {
        if(vec[i] == -1) {
            vec[i] = vec[i+1] + 1;
        }
    }


    rep(i, 0, n) {
        cout << vec[i] << endl;
    }
    return 0;
} ;