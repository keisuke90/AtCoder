#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<int> vec;

    long long i = 60;
    while(n > 0) {
        if(n >= ((long long)1<<i)) {
            n -= ((long long)1<<i);
            vec.push_back(i);
        }
        i--;
    }
    int size = vec.size();
    vector<long long> ans;
    rep(bit, 0, (1<<size)) {
        long long sum = 0;
        rep(i, 0, size) {
            if(bit & (1<<i)) {
                sum += ((long long)1<<vec[i]);
            }
        }
        ans.push_back(sum);
    }

    sort(ans.begin(), ans.end());
    for(auto v : ans) {
        cout << v << endl;
    }
    return 0;
} 