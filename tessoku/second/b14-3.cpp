#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

vector<long long> enumerate(vector<long long> vec) {
    vector<long long> sumList;
    rep(i, 0, (1 << vec.size())){
        long long sum = 0;
        rep(j, 0, vec.size()) {
            int mask = (1 << j);
            if((i/mask)%2==1) sum += vec[j];
        }
        sumList.push_back(sum);
    }
    return sumList;
}

long long n, k;
long long a[39];

int main(){
    cin >> n >> k;
    rep(i, 1, n+1) cin >> a[i];

    vector<long long> a1, a2;
    rep(i, 1, n/2+1) a1.push_back(a[i]);
    rep(i, n/2+1, n+1) a2.push_back(a[i]);

    vector<long long> a1sum, a2sum;
    a1sum = enumerate(a1);
    a2sum = enumerate(a2);
    sort(a1sum.begin(), a1sum.end());
    sort(a2sum.begin(), a2sum.end());

    string ans = "No";
    rep(i, 0, a1sum.size()){
        int pos = lower_bound(a2sum.begin(), a2sum.end(), k - a1sum[i]) - a2sum.begin();
        if(pos < a2sum.size() && a1sum[i] + a2sum[pos] == k) ans = "Yes";
    }
    cout << ans << endl;
    return 0;
} 