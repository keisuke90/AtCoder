#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    long long w = a+b;
    vector<int> d(n);
    rep(i, 0, n) {
        cin >> d[i];
        d[i] %= w;
    }
    sort(d.begin(), d.end());
    rep(i, 0, n) d.push_back(d[i]+w);

    rep(i, 0, n) {
        if(d[i+1]-d[i] >= b+1) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
} 
