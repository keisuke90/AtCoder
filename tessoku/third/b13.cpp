#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    vector<long long> vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i];

    long long sum = 0, ans = 0;
    int j = 0;
    for(int i = 0; i < n; i++) {
        while(j < n && sum + vec[j] <= k) {
            sum += vec[j++];
        }
        ans += j - i;
        sum -= vec[i];
    }
    cout << ans << endl;
    return 0;
}
