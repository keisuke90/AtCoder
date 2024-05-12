#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n), pos;
    int max_a = 0;
    rep(i, 0, n) {
        cin >> a[i];
        max_a = max(max_a, a[i]);
    }
    rep(i, 0, n) {
        if(a[i] == max_a) pos.push_back(i+1);
    }

    rep(i, 0, k) {
        int b;
        cin >> b;
        if(find(pos.begin(), pos.end(), b) != pos.end()) {
            cout << "Yes" <<endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
} 