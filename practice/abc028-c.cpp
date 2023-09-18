#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    vector<int> a(5);
    vector<bool> b = {false, false, true, true, true};
    rep(i, 0, 5) {
        cin >> a[i];
    }
    vector<int> sum;
    do {
        int tmp = 0;
        rep(i, 0, 5) {
            if(b[i]) tmp += a[i];
        }
        sum.push_back(tmp);
    } while(next_permutation(b.begin(), b.end()));
    sort(sum.begin(), sum.end(), greater<int>());
    cout << sum[2] << endl;
    return 0;
} 