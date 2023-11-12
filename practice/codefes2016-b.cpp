#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec[i];
    set<pair<int, int>> s;
    rep(i, 0, n) {
        if(i+1 == vec[vec[i]-1]) {
            s.insert({min(vec[i], vec[vec[i]-1]), max(vec[i], vec[vec[i]-1])});
        }
    }
    cout << s.size() << endl;

    return 0;
} 