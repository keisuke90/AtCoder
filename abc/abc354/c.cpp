// #include <bits/stdc++.h>
// #define rep(i, start, end) for(int i = start; i < end; i++)
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     vector<pair<pair<int, int>, int>> vec(n);
//     rep(i, 0, n) {
//         int a, c;
//         cin >> a >> c;
//         vec[i] = {{a, c}, i+1};
//     }
//     sort(vec.begin(), vec.end(), [](const pair<pair<int, int>, int>& p1, const pair<pair<int, int>, int>& p2) {
//         if (p1.first.first != p2.first.first) return p1.first.first > p2.first.first;
//         return p1.first.second > p2.first.second;
//     });

//     vector<int> ans;
//     while(vec.size() > 1) {
//         int a = vec.back().first.first;
//         int c = vec.back().first.second;
//         int i = vec.back().second;
//         vec.pop_back();
//         if(a < vec.back().first.first && c > vec.back().first.second) continue;
//         ans.push_back(i);
//     }
//     ans.push_back(vec.back().second);
//     sort(ans.begin(), ans.end());
//     cout << ans.size() << endl;
//     for(auto i : ans) cout << i << ' ';
//     cout << endl;

//     return 0;
// } 

#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> vec(n);
    rep(i, 0, n) {
        int a, c;
        cin >> a >> c;
        vec[i] = {{a, c}, i+1};
    }

    sort(vec.begin(), vec.end(), [](const pair<pair<int, int>, int>& p1, const pair<pair<int, int>, int>& p2) {
        if (p1.first.first != p2.first.first) return p1.first.first > p2.first.first;
        return p1.first.second < p2.first.second;
    });

    vector<int> ans;
    int min_cost = INT_MAX;

    for (const auto &card : vec) {
        int a = card.first.first;
        int c = card.first.second;
        int i = card.second;

        if (c < min_cost) {
            ans.push_back(i);
            min_cost = c;
        }
    }

    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for(auto i : ans) cout << i << ' ';
    cout << endl;

    return 0;
}
