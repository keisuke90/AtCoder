#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long > vec(n);
    rep(i, 0, n) cin >> vec[i];
    reverse(vec.begin(), vec.end());

    rep(i, 1, n) {
        if(vec[i] > vec[i-1]) {
            vec[i]--;
        }
    }

    rep(i, 1, n) {
        if(vec[i] > vec[i-1]) {
            cout << "No" << endl;
            return 0; 
        }
    }

    cout << "Yes" << endl;
    return 0;
} 