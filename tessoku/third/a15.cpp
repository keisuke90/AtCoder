#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec[i];
    vector<int> sorted_vec = vec;
    sort(sorted_vec.begin(), sorted_vec.end());
    sorted_vec.erase(unique(sorted_vec.begin(), sorted_vec.end()), sorted_vec.end());

    rep(i, 0, n) {
        cout << lower_bound(sorted_vec.begin(), sorted_vec.end(), vec[i]) - sorted_vec.begin() + 1 << ' ';
    }
    cout << endl;

    return 0;
} 