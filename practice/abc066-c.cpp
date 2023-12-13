#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];

    vector<int> odd, even;
    
    rep(i, 0, n) {
        if(i%2==0) even.push_back(a[i]);
        else odd.push_back(a[i]);
    }

    if(n%2==0) {
        reverse(odd.begin(), odd.end()); 
        rep(i, 0, odd.size()) cout << odd[i] << ' ';
        rep(i, 0, even.size()) cout << even[i] << ' ';
        cout << endl;
    } else {
        reverse(even.begin(), even.end());
        rep(i, 0, even.size()) cout << even[i] << ' ';
        rep(i, 0, odd.size()) cout << odd[i] << ' ';
        cout << endl;
    }

    return 0;
} 