// #include <bits/stdc++.h>
// #define rep(i, start, end) for(int i = start; i < end; i++)
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     vector<pair<int, long long>> N(n);
//     rep(i, 0, n) {
//         long long a, b;
//         cin >> a >> b;
//         if(a == 0) {
//             N[i] = make_pair(i, 0);
//         } else {
//             long long  ans = a * (a+b);
//             N[i] = make_pair(i, ans);
//         }
//     }

//     sort(N.begin(), N.end(), [](const pair<int, long long> &a, const pair<int, long long> &b) {
//         if (a.second != b.second) {
//             return a.second > b.second;
//         } else {
//             return b.first < a.first;
//         }
//     });




//     rep(i, 0, n) cout << N[i].first+1 << ' ';
//     cout << endl;

//     return 0;
// } 

#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
using ll = long long;

struct Data {
    int index;
    ll a, b;
};

int main(){
    int n;
    cin >> n;
    vector<Data> N(n);
    rep(i, 0, n) {
        ll a, b;
        cin >> a >> b;
        N[i] = {i, a, b};
    }

    sort(N.begin(), N.end(), [](const Data &a, const Data &b) {
        if (a.a * (b.a + b.b) != b.a * (a.a + a.b)) {
            return a.a * (b.a + b.b) > b.a * (a.a + a.b);
        } else {
            return a.index < b.index;
        }
    });

    rep(i, 0, n) cout << N[i].index+1 << ' ';
    cout << endl;

    return 0;
}
