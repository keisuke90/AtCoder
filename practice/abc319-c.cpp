#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    vector<int> vec(9);
    rep(i, 0, 9) cin >> vec[i];

    vector<vector<int>> pattern = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8},
        {0, 3, 6},
        {1, 4, 7},
        {2, 5, 8},
        {0, 4, 8},
        {2, 4, 6}
    };

    vector<int> order(9);
    rep(i, 0, 9) order[i] = i;

    int cnt = 0;
    int not_disapoint = 0;
    do {
        cnt++;
        bool flg = true;
        for(auto p : pattern) {
            int a = p[0];
            int b = p[1];
            int c = p[2];

            if(vec[a] == vec[b] && order[a] < order[c] && order[b] < order[c]) flg = false;
            else if(vec[a] == vec[c] && order[a] < order[b] && order[c] < order[b]) flg = false;
            else if(vec[b] == vec[c] && order[b] < order[a] && order[c] < order[a]) flg = false;
        }

        if(flg) not_disapoint++;
    } while(next_permutation(order.begin(), order.end()));

    double ans = (double)not_disapoint / (double)cnt;

    cout << setprecision(10) << ans << endl;

    return 0;
} 