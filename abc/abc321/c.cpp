#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    vector<long long> nums;

    rep(i, 2, (1<<10)) {
        long long tmp = 0;
        for(int j = 9; j >= 0; j--) {
            if(i & (1<<j)) {
                tmp *= 10;
                tmp += j;
            }
        }
        nums.push_back(tmp);
    }
    sort(nums.begin(), nums.end());


    int k;
    cin >> k;
    cout << nums[k-1] << endl;

    return 0;
} 