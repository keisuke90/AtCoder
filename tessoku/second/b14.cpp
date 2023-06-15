#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

vector<long long> Enumerate(vector<long long> a) {
    vector<long long> sumlist;
    rep(i, 0, 1<<a.size()) {
        long long sum = 0;
        rep(j, 0, a.size()) {
            if(i/(1<<j)%2==1) sum += a[j];
        }
        sumlist.push_back(sum);
    }
    return sumlist;
}

long long n, k;
long long a[39];

int main(){
    cin >> n >> k;
    rep(i, 1, n+1) cin >> a[i];

    vector<long long> l1, l2;
    rep(i, 1, n/2+1) l1.push_back(a[i]);
    rep(i, n/2+1, n+1) l2.push_back(a[i]);

    vector<long long> sum1 = Enumerate(l1);
    vector<long long> sum2 = Enumerate(l2);
    sort(sum1.begin(), sum1.end());
    sort(sum2.begin(), sum2.end());

    rep(i, 0, sum1.size()) {
        int pos = lower_bound(sum2.begin(), sum2.end(), k-sum1[i]) - sum2.begin();
        if(pos < sum2.size() && sum2[pos] == k-sum1[i]) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
} 