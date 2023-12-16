#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long ans = 0;
    long long start = 1;
    vector<long long> lpu(15);
    rep(i,0,15) {
        lpu[i] = start;
        start=start*10+1;
    }
    vector<vector<int> > vec;
    rep(i, 0, 15) {
        rep(j, 0, i+1) {
            rep(k, 0, j+1) {
                vec.push_back({i, j, k});
            }
        }
    }

    ans=lpu[vec[n-1][0]]+lpu[vec[n-1][1]]+lpu[vec[n-1][2]];
    cout << ans << endl;


    return 0;
} 