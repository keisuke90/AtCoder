#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n;
    cin >> n;
    bitset<60> bs(n);
    vector<int> vec;
    rep(i, 0, 60) {
        if(bs[i]) vec.push_back(i);
    }
    vector<long long> ans;
    rep(bit, 0, (1<<vec.size())) {
        long long sum = 0;
        rep(i, 0, vec.size()) {
            if(bit & (1<<i)) {
                sum += ((long long)1<<vec[i]);
            }
        }
        ans.push_back(sum);
    }
    sort(ans.begin(), ans.end());
    for(auto a : ans) cout << a << endl;


    return 0;
} 