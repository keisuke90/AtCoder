#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> vec1, vec2;
    rep(i, 0, n) {
        int a;
        cin >> a;
        if(i%2==0) vec1.push_back(a);
        else vec2.push_back(a);
    }

    vector<long long> sum1, sum2;
    rep(bit, 0, (1 << vec1.size())) {
        long long sum = 0;
        rep(j, 0, vec1.size()) {
            if(bit & (1 << j)) {
                sum += vec1[j];
            }
        }
        if(sum == k) {
            cout << "Yes" << endl;
            return 0;
        }
        sum1.push_back(sum);
    }
    rep(bit, 0, (1 << vec2.size())) {
        long long sum = 0;
        rep(j, 0, vec2.size()) {
            if(bit & (1 << j)) {
                sum += vec2[j];
            }
        }
        if(sum == k) {
            cout << "Yes" << endl;
            return 0;
        }
        sum2.push_back(sum);
    }

    sort(sum1.begin(), sum1.end());
    sort(sum2.begin(), sum2.end());
    rep(i, 0, sum1.size()) {
        int tgt = k - sum1[i];
        if(tgt < 0) continue;
        if(binary_search(sum2.begin(), sum2.end(), tgt)) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
} 