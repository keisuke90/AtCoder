#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int n, q;
vector<int> a;

int search(int x) {
    int pos = lower_bound(a.begin(), a.end(), x) - a.begin();
    return pos;
}


int main(){
    cin >> n;
    rep(i, 0, n) {
        int A;
        cin >> A;
        a.push_back(A);
    }
    sort(a.begin(), a.end());
    cin >> q;
    rep(i, 0, q) {
        int x;
        cin >> x;
        cout << search(x) << endl;
    }


    return 0;
} 