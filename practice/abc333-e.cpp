#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> route(n);
    vector<stack<int>> vec(n);
    vector<int> min_vec(n);

    rep(i, 0, n) {
        int a, b;
        cin >> a >> b;
        b--;
        route[i] = {a, b};
        if(a==1) {
            vec[b].push(i);
        } else if (a==2) {
            if(vec[b].size()<1) {
                cout << -1 << endl;
                return 0;
            } else {
                min_vec[vec[b].top()]++;
                min_vec[i]--;
                vec[b].pop();
            }
        }
    }

    int max_item = 0;
    vector<int> min_vec1 = min_vec;
    rep(i, 1, n) {
        min_vec1[i]+=min_vec1[i-1];
        max_item = max(max_item, min_vec1[i]);
    }

    cout << max_item << endl;
    rep(i, 0, n) {
        if(route[i].first==1) {
            if(min_vec[i]==1) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }

    return 0;
} 