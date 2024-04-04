#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int nn = n;
    vector<int> p;
    for(int i=2; i*i<=n; i++) {
        while(nn%i==0) {
            nn/=i;
            p.push_back(i);
        }
    }

    if(nn!=1) p.push_back(nn);

    cout << n << ": ";
    rep(i, 0, p.size()) {
        if(i == p.size()-1) cout << p[i];
        else cout << p[i] << ' ';
    }
    cout << endl;

    return 0;
} 