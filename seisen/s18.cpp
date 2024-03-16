#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec[i];

    int q;
    cin >> q;
    int cnt = 0;
    rep(i, 0, q) {
        int a;
        cin >> a;
        if(binary_search(vec.begin(), vec.end(), a)) cnt++;
    }
    cout << cnt << endl;

    return 0;
} 