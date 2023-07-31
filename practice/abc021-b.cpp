#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, a, b, k;
    cin >> n >> a >> b >> k;
    set<int> route;
    route.insert(a);
    route.insert(b);

    rep(i, 0, k) {
        int p;
        cin >> p;
        if(route.find(p) != route.end()) {
            cout << "NO" << endl;
            return 0;
        } else {
            route.insert(p);
        }
    }
    cout << "YES" << endl;
    return 0;
} 