#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int d, n, m;
    cin >> d >> n >> m;
    vector<int> vec(n+1);
    vec[0] = 0; vec[n] = d;
    rep(i, 1, n) cin >> vec[i];
    sort(vec.begin(), vec.end());
    
    long long ans = 0;
    rep(i, 0, m) {
        int k;
        cin >> k;

        int l = 0;
        int r = n+1;
        while(abs(l-r) > 1) {
            int mid = (l+r)/2;
            if(vec[mid] > k) r = mid;
            else l = mid;
        }
        ans += min(abs(vec[l]-k), abs(vec[r]-k));
    }
    cout << ans << endl;
    return 0;
} 