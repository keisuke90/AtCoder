#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<unordered_set<int>> vec(n);
    rep(i, 0, n) {
        int c;
        cin >> c;
        vec[i].insert(c);
    }

    rep(i, 0, q) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;

        if(vec[a].size() > vec[b].size()) {
            swap(vec[a] , vec[b]);
        }
        for(auto A : vec[a]) vec[b].insert(A);
        vec[a].clear();
        cout << vec[b].size() << endl;
    }


    return 0;
} 