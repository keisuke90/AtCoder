#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int n;
vector<int> a, b, c;

int search(int x){
    int pos = lower_bound(a.begin(), a.end(), x) - a.begin() + 1;
    return pos;
}

int main(){
    int n;
    cin >> n;
    rep(i, 0, n) {
        int A;
        cin >> A;
        a.push_back(A);
        c.push_back(A);
    };
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    rep(i, 0, n) {
        b.push_back(search(c[i]));
    }
    
    rep(i, 0, n) cout << b[i] << ' ';
    cout << endl;
    return 0;
} 