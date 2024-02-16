#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec[i];

    int l = 0;
    int r = 1e9;
    while(abs(l-r)>1) {
        int mid = (l+r)/2;
        long long sum = 0;
        rep(i, 0, n) sum += mid/vec[i];

        if(sum >= k)  r = mid;
        else l = mid;
    }
    cout << r << endl;
    return 0;
} 